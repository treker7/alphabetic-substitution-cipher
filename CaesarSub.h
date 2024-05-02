#ifndef CaesarSubSolve_H
#define CaesarSubSolve_H

#include <string>
#include <vector>
#include <map>

#define IC_ENGLISH .065

class CaesarSubSolve {
public:
	CaesarSubSolve(const std::string& corpusFile);

	static std::string decode(const std::string& ciphertext, const std::string& key);
	static std::string getRandomKey();
	static double calculateIC(const std::string& ciphertext);

	std::string decrypt(const std::string& ciphertext);
	double evaluateFitness(const std::string& text);
	void sortDecrpytions(std::vector<std::string>& decryptions);

private:
	std::map<std::string, float> quadgramCounts;
	int i1, i2;

	static bool seededRandGenerator;

	std::string mutateKey(const std::string& key);
	double evaluateFitness2(const std::string& text);
};

#endif CaesarSubSolve_H
