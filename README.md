# 3 užduotis

# Diegimo failo naudojimo instrukcija

Paspaudus ant *Student_grading_setup.exe* failo, pasirinkite, kur išsaugoti programą. Rekomenduojama pasirinkti laukelyje nurodytą diegimo vietą.  
![Diegimo vieta](./screenshots/destinationLocation.JPG)  

Pasirinkite sukurti darbalaukio nuorodą į programą. Paspauskite „Next“.  
![Darbalaukio nuoroda](shortcut.JPG)  

Paspauskite „Install“.  
![Diegti](install.JPG)  

Pasirinkite iš karto paleisti programą arba tieisog uždarykite langą.  
![paleist faila is karto](runProgram.JPG)  

Pasirinkus iš karto paleisit programą, jums atsidarys programos meniu.
![programo meniu](program.JPG)  

Darbalaukyje turėtų atsirasti nuoroda į programą. Taip pat ją galima paleisti iš „Start“ meniu.  
![Darbalaukio nuoroda](shortcutIcon.JPG)  

Norint pašalinti programą, tai galite padaryti per „Valdymo skydą“ → „Programos“ → „Pašalinti programą“.  
![Valdymo skydas](controlPanell.JPG)  

Programų sąraše radę programą, ją galite pašalinti paspaudę dešinįjį kompiuterio pelės klavišą ir pasirinkę „Pašalinti“.  
![Pašalinti](delete.JPG)



# Programos naudojimosi instrukcija

Paleidus programą rodomas pasirikimų meniu:  
![meniu](./screenshots/progMeniu.JPG)

## Studentų duomenų įvestis

### Duomenų įvedimas rankiniu būdu
Įveskite ***skaičių 1***, kad suvesti studentų duomenis ***rankiniu būdų***.
![input1](./screenshots/input1.JPG)  
  
Toliau, galima pasirinkti įvesti duomenis paeiliui (***1***), kur programa pati paprašo studento vardo, pavardės ir t.t., arba duomenis surašyti į vieną eilutę (***2***).

Pasirinkus ***1. `Step-by-step entry`***, duomenys turi būti suvesti tokiu formatu:  
![input1.1](./screenshots/input1.1.JPG)
Balus reikia įvesti po vieną. Galima pasirinkti ir atsitiktinai sugeneruoti balą parašius '***r***'.  

Pasirinkus ***2. `Quick entry`***, duomenys turi būti suvesti tokiu formatu:  
![input1.2](./screenshots/input1.2.JPG)

Galutinė išvestis atodo taip:  
![output1.1](./screenshots/output1.1.JPG)


### Duomenų įvedimas iš failo
Įveskite ***skaičių 3***, kad duomenis programa nuskaitytų iš failo. 
Įveskite pilną failo pavadinimą pvz.: Student10000.txt   
![input2](./screenshots/input2.png)  

Programa atspausdina lentelę su duomenimis iš failo:  
![output2](./screenshots/output2.png)
  

### Atsitiktinių duomenų sąrašo generavimas
Programa leidžia sugeneruoti atsitiktinius duomenis ir su jais dirbti.  
Įveskite ***skaičių 4*** ir kiek eilučių norite, kad programa sugeneruotų.  
Programa praneš, jei failas sėkmingai sugeneruotas.  
![generateStudFile](./screenshots/generateRandomStudFile.png)


## Darbas su duomenimis

### Apskaičiuoti galutinį balą
Įveskite ***skaičių 2***, kad apskaičiuoti galutinį balą.  
Pasirinkite, ar skaičiuoti galutinį balą su vidurkiu '***m***', mediana '***md***', ar gauti abu rezultatus '***b***'.  
![calFinalGrade1](./screenshots/calFinalGrade1.png)  

Išvestis gaunama ekrane:  
![calFinalGrade2](./screenshots/calFinalGrade2.png)  


### Surušiuoti studentus į dvi kategorijas
Programa leidžia studentus surūšiuoti i dvi kategorijas: "vargšiukus" (strugglers) ir "kietiakus" (high achievers).  
Įveskite ***skaičių 5*** ir pateikite failo, iš kurio nuskaityti duomenis, pavadinimą (pvz. Student10.txt).  
  ![categorize1](./screenshots/categorize1.png)  
  
Pasirinkite rūšiavimo strategiją (1 - lėčiau veikentis rūšiavimas, 2 ir 3 - spartestis rūšiavimas). Taip pat programa prašo pasirinkti, kad sarašai būtų papildomai surūšiuoti pagal vardą '***n***' arba balus '***g***'.  
![categorize2](./screenshots/categorize2.png)  

Sėkmingai surušiavus duomenis, programa praneša apie išvestus failus.  
![categorize3](./screenshots/categorize3.png)

Išvestis failuose:  
***strugglers.txt***  
![categorize4](./screenshots/categorize4.png)
  
***highAchievers.txt***  
![categorize5](./screenshots/categorize5.png)  

## Baigti darbą
Įveskite ***skaičių 6***, kad baigtumėte darbą.



