#include "CaesarSub.h"

#include <algorithm>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
	if ((argc < 3) || (argc > 4)) {
		cout << "Usage: " << argv[0] << " <corpus_filename> <ciphertext> [num_iterations]" << endl;
		return -1;
	}	
	string shark = "\n                                 ,-\n                               ,'::|\n                              /::::|\n                            ,'::::o\\    \t                          _.. \n         ____........-------rm -rf /*    \t\t               ,-' /\n _.--\"\"\"\". . . .      .   .  .  .  \"\"`-._                           ,-' .;'\n<. - :::::o......  ...   . . .. . .  .  .\"\"--._                  ,-'. .;'\n `-._  ` `\":`:`:`::||||:::::::::::::::::.:. .  \"\"--._ ,'|     ,-'.  .;'\n     \"\"\"_=--       //'{};.. ````:`:`::::::::::.:.:.:. .`-`._-'.   .;'\n         \"\"--.__     \\(       \\               ` ``:`:``:::: .   .;'\n                \"\\\"\"--.:-.     `.                             .:/\n\t          \\. /    `-._   `.\"\"-----.,-..::(--\"\".\\\"\"`.  `:\\ \n  \t           `P         `-._ \\          `-:\\          `. `:\\\n   \t\t                   \"\"            \"            `-._)";
	cout << shark << endl << endl;

	string corpusFile(argv[1]), ciphertext(argv[2]), input = "";
	int numIterations = (argc == 4) ? atoi(argv[3]) : 500;

	cout << "\t[Automatic Monoalphabetic Substition Cipher Cryptanalysis]" << endl << endl;
	double ic = CaesarSubSolve::calculateIC(ciphertext);
	cout << "Index of Coincidence (IC) of Ciphertext: " << ic << endl;;

	if (abs(ic - IC_ENGLISH) > .015) {
		cout << "Warning: Index of Coincidence differs substantially from " << IC_ENGLISH << endl;
	}

	CaesarSubSolve caesarSubSolver(corpusFile);

	cout << "Now calculating possible decryptions..." << endl;
	vector<string> possible_decryptions;

	for (int i = 0; i < numIterations; i++) {
		possible_decryptions.push_back(caesarSubSolver.decrypt(ciphertext));
	}
	
	cout << "Now listing possible decryptions in order of fitness..." << endl << endl;

	std::sort(possible_decryptions.begin(), possible_decryptions.end(),
		[caesarSubSolver](const string& decryption1, const string& decryption2) {
			return caesarSubSolver.evaluateFitness(decryption1) < caesarSubSolver.evaluateFitness(decryption2);
		});

	for (int i = 0; i < numIterations; i++) {
		cout << "Text: " << possible_decryptions[i] << " Fitness: " << caesarSubSolver.evaluateFitness(possible_decryptions[i]) << endl;
	}

	return 0;
}
