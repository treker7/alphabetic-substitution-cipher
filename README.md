# Automatic Cryptanalysis of the Monoalphabetic Substitution Cipher
This program implements a hill climbing algorithm to automatically decrypt ciphertext encrypted with the monoalphabetic substitution cipher.

# Example
In this example, the ciphertext, "guuc gu ah cpu puezc ji cpu tacq npuzu jvz xutzuc guucaho naff cedu kfetu vhyuz cpu tjbuz ji yezdhuxx", encrypted with the key, "ertyuiopasdfghjklzxcvbnmqw", is correctly decrypted to the cleartext, "meet me in the heart of the city where our secret meeting will take place under the cover of darkness".

```
x64/Release> AlphabeticSubstitutionCipher.exe
Usage: AlphabeticSubstitutionCipher.exe <corpus_filename> <ciphertext> [num_iterations]

x64/Release> AlphabeticSubstitutionCipher.exe ../../Bible_Corpus.txt "guuc gu ah cpu puezc ji cpu tacq npuzu jvz xutzuc guucaho naff cedu kfetu vhyuz cpu tjbuz ji yezdhuxx" 10

                                 ,-
                               ,'::|
                              /::::|
                            ,'::::o\                                      _..
         ____........-------rm -rf /*                                  ,-' /
 _.--"""". . . .      .   .  .  .  ""`-._                           ,-' .;'
<. - :::::o......  ...   . . .. . .  .  .""--._                  ,-'. .;'
 `-._  ` `":`:`:`::||||:::::::::::::::::.:. .  ""--._ ,'|     ,-'.  .;'
     """_=--       //'{};.. ````:`:`::::::::::.:.:.:. .`-`._-'.   .;'
         ""--.__     \(       \               ` ``:`:``:::: .   .;'
                "\""--.:-.     `.                             .:/
                  \. /    `-._   `.""-----.,-..::(--"".\""`.  `:\
                   `P         `-._ \          `-:\          `. `:\
                                   ""            "            `-._)

        [Automatic Monoalphabetic Substition Cipher Cryptanalysis]

Index of Coincidence (IC) of Ciphertext: 0.0794941
Processing The Corpus File...
Counting Quadgram Frequencies...
Now calculating possible decryptions...
Now listing possible decryptions in order of fitness...

Text: baahbadwheaearthosheandhimeataoutlantahbaahdwjmdcchryagcrnauwpatheanofatosprtywall Fitness: -645.163
Text: nssensimeasasoretheasuiedwasrstgrysursensseimpwilleofsclousgmbsreasutksrthborfmsyy Fitness: -630.98
Text: daardaocreaeausrigrealorybeasainstalsardaarockboffrupamfulanchasrealiwasighuspcatt Fitness: -622.649
Text: gaargatersasahirdorsantryusaiadmicaniargaartebutwwrhlakwhnamefairsandpaidofhileacc Fitness: -597.983
Text: hooshowistotoansedstorwsqktonoefnbornoshooswickwllsayoularofimonstoregonedmanyiobb Fitness: -596.576
Text: veeovetuonenearomyonedtowinerembrkedreoveeotupithhoasechadebuleronedmjermylarsuekk Fitness: -595.864
Text: ceeacehoarerensatyaredhalpresetmsbedseaceeahofphiiangekindemovesaredtwestyvnsgoebb Fitness: -588.578
Text: weetwealtheheirtsothenatbyheresfrmenretweetalkyauuticeguineflverthenspersovirclemm Fitness: -538.326
Text: meetmeintheheastoftheritywheseouspersetmeetingwilltakeclareundestherovesofdasknepp Fitness: -430.581
Text: meetmeintheheartofthecitywhereoursecretmeetingwilltakeplaceunderthecoverofdarkness Fitness: -394.67

x64/Release>
```
