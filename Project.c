#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char search[109];

    char element[109][109] = {"Hydrogen","Helium","Lithium","Berrylium","Boron",
    "Carbon","Nitrogen","Oxygen","Flourine","Neon","Sodium","Magnesium",
    "Aluminium","Silicon","Phosphorus","Sulphur","Chlorine","Argon",
    "Potassium","Calcium","Scandium","Titanium","Vanadium","Chromium","Manganese","Iron",
    "Cobalt","Nickel","Copper","Zinc","Gallium","Germanium","Arsenic","Selenium","Bromine",
    "Krypton","Rubidium","Strontium","Yttrium","Zirconium","Niobium","Molybdenum",
    "Technetium","Ruthenium","Rhodium","Palladium","Silver","Cadmium","Indium","Tin",
    "Antimony","Tellurium","Iodine","Xenon","Cesium","Barium","Lanthanum","Cerium","Praseodymium",
    "Neodymium","Promethium","Samarium","Europium","Gadolinium","Terbium","Dysprosium","Holmium",
    "Erbium","Thulium","Ytterbium","Lutetium","Hafnium","Tantalum","Tungsten","Rhenium","Osmium",
    "Iridium","Platinum","Gold","Mercury","Thallium","Lead","Bismuth","Polonium","Astatine","Radon",
    "Francium","Radium","Actinium","Thorium","Protactinium","Uranium","Neptunium","Plutonium",
    "Americium","Curium","Berkelium","Californium","Einsteinium","Fermium","Mendelevium",
    "Nobelium","Lawrencium","Rutherfordium","Dubnium","Seaborgium","Bohrium","Hassium","Meitnerium"};

    char symbol[109][109] = {"H","He","Li","Be","B","C","N","O","F","Ne","Na","Mg","Al","Si","P","S",
    "Cl","Ar","K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr",
    "Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te","I","Xe","Cs","Ba",
    "La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb","Lu","Hf","Ta","W","Re","Os",
    "Ir","pt","Au","Hg","Ti","Pb","Bi","Po","At","Rn","Fr","Ra","Ac","Th","Pa","U","Np","Pu","Am","Cm",
    "Bk","Cf","Es","Fm","Md","No","Lr","Rf","Db","Sg","Bh","Hs","Mt"};

    char mass[109][109] = {"1.00794","4.002602","6.941","9.012182","10.811","12.0107","14.0067","15.9994",
    "18.9984032","20.1797","22.98976928","24.3050","26.9815386","28.0855","30.973762","32.065","35.453",
    "39.948","39.0983","40.078","44.955912","47.867","50.9415","51.9961","54.938045","55.845","58.933195",
    "58.6934","63.546","65.38","69.723","72.64","74.92160","78.96","79.904","83.798","85.4678","87.62",
    "88.90585","91.224","92.90638","95.96","98","101.07","102.90550","106.42","107.8682","112.411",
    "114.818","118.710","121.760","127.60","126.90447","131.293","132.9054519","137.327","138.90547",
    "140.116","140.90765","144.242","145","150.36","151.964","157.25","158.92535","162.500","164.93032",
    "167.259","168.93421","173.054","174.9668","178.49","180.94788","183.84","186.207","190.23","192.217",
    "195.084","196.966569","200.59","204.3833","207.2","208.98040","209","210","222","223","226","227",
    "232.03806","231.03588","238.02891","237","244","243","247","247","251","252","257","258","259","262",
    "263","268","271","270","270","278"};

    char melting[109][109] = {"-259.14","<-272.2","180.54","1278","2079","3387","-209.86","-218-4",
    "-219.62","-248.67","97.81","648.8","660.37","1410","44.1","112.8","-100.98","-189.2","63.65","839",
    "1541","1660","1890","1857","1244","1535","1495","1453","1083","419.4","29.78","937.4","817","217",
    "-7.2","-156.6","38.87","769","1522","1852","2468","2617","2172","2310","1966","1552","961.9","320.9",
    "156.6","232.0","630.60","449.5","113.5","-111.9","28.40","725","921","799","931","1021","1168",
    "1077","822","1313","1356","1412","1474","1497","1545","819","1663","2227","2996","3410","3180",
    "3045","2410","1772","1064","-38.84","303.5","327.5","271.8","254","302","-71","27","700","1050",
    "1750","1600","1132","640","641","994","1340","0","0","0","0","0","0","0","0","0","0","0","0","0"};

    char boiling[109][109] = {"-252.87","-268.93","1347","29.70","2550","4827","-195.8","-182.96",
    "-188.14","-246.05","882.9","1090","2467","2355","280","444.67","-34.6","-185.7","774","1484",
    "2831","3287","3380","2672","1962","2750","2870","2732","2567","907","2403","2830","613","684.9",
    "58.78","-152.3","668","1384","3338","4377","4742","4612","4877","3900","3727","3140","2212","765",
    "2080","2270","1750","1750","990","184.4","-107.1","678.4","1640","3457","3426","3512","3068",
    "2460","1791","1597","3266","3123","2562","2695","2900","1947","1194","3395","4602","5425","5660",
    "5627","5027","4130","3827","2807","356.6","1457","1740","1560","962","337","-61.8","677","1140",
    "3200","4790"," ","3818","3902","3232","2609"," "," "," "," "," "," "," "," "," "," "," "," "," "," "};

    char Negativity[109][109] = {"2.2","0","1.0","1.5","2","2.5","3.1","3.5","4.1","0","1","1.2","1.5","1.7",
    "2.1","2.4","2.8","0","0.9","1.0","1.2","1.3","1.5","1.6","1.6","1.6","1.7","1.8","1.7","1.8","2.0",
    "2.2","2.5","2.7","0","0.9","1.0","1.1","1.2","1.2","1.3","1.4","1.4","1.5","1.4","1.4","1.5","1.5",
    "1.7","1.8","2.0","2.2","0","1","2","1.1","1.1","1.1","1.1","1.1","1.1","1.0","1.1","1.1","1.1","1.1",
    "1.1","1.1","1.1","1.1","1.2","1.3","1.4","1.5","1.5","1.6","1.4","1.4","1.5","1.4","1.6","1.7","1.8",
    "2.0","0","0.9","1.0","1.0","1.1","1.1","1.2","1.2","1.2","~1.2","~1.2","~1.2","~1.2","~1.2","~1.2",
    "~1.2","0","0","0","0","0","0","0","0"};

    char oxidation[109][109] = {"-1,1","0","1","2","3","-4,2,4","-3,2,3,4,5","-2,-1","-1","0","1","2","3","4",
    "-3,3,5","-2,2,4,6","-1,1,3,5,7","0","1","2","3","3,4","2,3,4,5","2,3,6","2,3,4,6,7","2,3,6","2,3","2,3",
    "!,2","2","3","4","-3,3,5","-2,4,6","-1,1,3,5,7","2,4","1","2","3","4","3,5","2,3,4,5,6","7","3,4,8",
    "1,2,3,4","2,4","1,2","2","3","2,4","-3,3,5","-2,4,6","-1,1,3,5,7","2,4,6","1","2","3","3,4","3,4","3",
    "3","2,3","2,3","3","3,4","3","3","3","2,3","3","3","4","4,5","3,4,5,6","3,4,5,6","3,4,5,6","3,4,5,6",
    "3,4","3,4","3,4","3","3","3","2,3","3","4","5","2,3,4,5,6","2,4,7","2,3,4,6,8","1,2,3,4,6","2,4","1,3",
    "1,2","1,3","2,4","3,5","2,4,6","-1,1,3,5,7","2","1","2","3","4","4,5","3,4,5,6","3,4,5,6","3,4,5,6",
    "3,4,5,6","3,4","3,4","3","3","3","2,3","3","0","0","0","0","0","0"};

    char emission[109][109] = {"1s^1","1s^2","He 2s^1","He 2s^2","He 2s^2 2p^1","He 2s^2 2p^2","He 2s^2 2p^3",
    "He 2s^2 2p^4","He 2s^2 2p^5","He 2s^2 2p^6","Ne 3s^1","Ne 3s^2","Ne 3s^2 3p^1","Ne 3s^2 3p^2","Ne 3s^2 3p^3",
    "Ne 3s^2 3p^4","Ne 3s^2 3p^5","Ne 3s^2 3p^6","Ar 4s^1","Ar 4s^2","Ar 3d^1 4s^2","Ar 3d^2 4s^2","Ar 3d^3 4s^2",
    "Ar 3d^5 4s^1","Ar 3d^5 4s^2","Ar 3d^6 4s^2","Ar 3d^7 4s^2","Ar 3d^8 4s^2","Ar 3d^10 4s^1","Ar 3d^10 4s^2",
    "Ar 3d^10 4s^2 4p^1","Ar 3d^10 4s^2 4p^2","Ar 3d^10 4s^2 4p^3","Ar 3d^10 4s^2 4p^4","Ar 3d^10 4s^2 4p^5",
    "Ar 3d^10 4s^2 4p^6","Kr 5s^1","Kr 5s^2","Kr 4d^1 5s^2","Kr 4d^2 5s^2","Kr 4d^4 5s^1","Kr 4d^5 5s^1",
    "Kr 4d^6 5s^1","Kr 4d^1 5s^7","Kr 4d^8 5s^1","Kr 4d^10","Kr 4d^10 5s^1","Kr 4d^10 5s^2","Kr 4d^10 5s^2 5p^1",
    "Kr 4d^10 5s^2 5p^2","Kr 4d^10 5s^2 5p^3","Kr 4d^10 5s^2 5p^4","Kr 4d^10 5s^2 5p^5","Kr 4d^10 5s^2 5p^6",
    "Xe 6s^1","Xe 6s^2","Xe 5d^1 6s^2","Xe 4f^2 6s^2","Xe 4f^3 6s^2","Xe 4f^4 6s^2","Xe 4f^5 6s^2",
    "Xe 4f^6 6s^2","Xe 4f^7 6s^2","Xe 4f^7 5d^1 6s^2","Xe 4f^9 6s^2","Xe 4f^10 6s^2","Xe 4f^11 6s^2",
    "Xe 4f^12 6s^2","Xe 4f^13 6s^2","Xe 4f^14 6s^2","Xe 4f^14 5d^1 6s^2","Xe 4f^14 5d^2 6s^2","Xe 4f^14 5d^3 6s^2",
    "Xe 4f^14 5d^4 6s^2","Xe 4f^14 5d^5 6s^2","Xe 4f^14 5d^6 6s^2","Xe 4f^14 5d^7 6s^2","Xe 4f^14 5d^9 6s^1",
    "Xe 4f^14 5d^10 6s^1","Xe 4f^14 5d^10 6s^2","Xe 4f^14 5d^10 6s^2 6p^1","Xe 4f^14 5d^10 6s^2 6p^2",
    "Xe 4f^14 5d^10 6s^2 6p^3","Xe 4f^14 5d^10 6s^2 6p^4","Xe 4f^14 5d^10 6s^2 6p^5","Xe 4f^14 5d^10 6s^2 6p^6",
    "Rn 7s^1","Rn 7s^2","Rn 6d^1 7s^2","Rn 6d^2 7s^2","Rn 5f^2 6d^1 7s^2","Rn 5f^3 6d^1 7s^2",
    "Rn 5f^4 6d^1 7s^2","Rn 5f^6 7s^2","Rn 5f^7 7s^2","Rn 5f^7 6d^1 7s^2","Rn 5f^9 7s^2","Rn 5f^10 7s^2",
    "Rn 5f^11 7s^2","Rn 5f^12 7s^2","Rn 5f^13 7s^2","Rn 5f^14 7s^2","Rn 5f^14 6d^1 7s^2","Rn 5f^14 6d^2 7s^2",
    "Rn 5f^14 6d^3 7s^2","Rn 5f^14 6d^4 7s^2","Rn 5f^14 6d^5 7s^2","Rn 5f^14 6d^6 7s^2","Rn 5f^14 6d^7 7s^2",};

    char inventor[109][109] = {"Cavendish,Henry","Janssen, Pierre Jules Cesar Ramsay, Sir",
    "Arfvedson,johann August","Vauquelin, Louis Nicolas","Gay-Lussac,Joseph Louis Thénard, Louis Jacques Davy, Sir Humphry",
    "N/A","Rutherford,Daniel","Priestley, Joseph Scheele, Carl Wilhelm","Moissan, Henri",
    "Ramsay, Sir William Travers, Morris William","Davy, Sir Humphry","Black, Joseph",
    "Öersted, Hans Christian","Berzelius, Jöns Jakob","Brand, Hennig","N/A","Scheele, Carl Wilhelm",
    "Rayleigh, Lord John William Strutt, 3rd Baron Ramsay, Sir William","Davy, Sir Humphry","Davy, Sir Humphry",
    "Nilson, Lars Frederick","Gregor, Rev. William Klaproth, Martin Heinrich","del Rio, Andrés Manuel",
    "Vauquelin, Louis Nicolas","Gahn, Johan Gottlieb\n","N/A","Brandt, Georg","Cronstedt, Axel Frederik, Baron",
    "N/A","N/A","de Boisbaudran,Paul Émile Lecoq","Winkler, Clemens Alexander",
    "Magnus, Albertus St. (Count von Bollstädt)","Berzelius, Jöns Jakob","Balard, Antoine Jéróme Löwig, Carl",
    "Ramsay, Sir William Travers, Morris William","Bunsen, Robert Wilhelm Kirchhoff, Gustav Robert",
    "Hope, Thomas Charles Crawford, Adair","Gadolin, Johann","Klaproth, Martin Heinrich","Hatchett, Charles",
    "Hjelm, Peter Jacob","Noddack, Walter Perrier, Carlo Segré, Emilio Gino",
    "Sniadecki,Jedrzej Andrzej Osann, Gottfried Wilhelm Claus, Carl Ernst (Klaus, Karl Karlovich)",
    "Wollaston,William Hyde","Wollaston,William Hyde","N/A","Stromeyer,Friedrich Davy, Sir Humphry",
    "Reich, Ferdinand Richter, Hieronymous Theodor","N/A","N/A","Müller, Franz Joseph, Baron von Reichenstein",
    "Courtois, Bernard","Ramsay, Sir William Travers, Morris William",
    "Bunsen, Robert Wilhelm Kirchhoff, Gustav Robert","Davy, Sir Humphry","Mosander, Carl Gustav",
    "Berzelius, Jöns Jakob Hisinger, Wilhelm","Auer, Karl,Freiherr von Welsbach",
    "Mosander, Carl Auer, Karl, Freiherr von","Marinsky, Jacob A. Glendenin, Lawrence Elgin Coryell, Charles D.",
    "Delafontaine, Marc de Boisbaudran, Paul Émile Lecoq","Demarçay, Eugène Anatole",
    "de Marignac,Jean Charles Galissard de Boisbaudran,Paul Émile Lecoq","Mosander, Carl Gustav",
    "Delafontaine, Marc de Boisbaudran, Paul Émile Lecoq",
    "Cleve, Per Teodor Delafontaine, Marc Soret, Jaques Louis","Mosander, Carl Gustav","Cleve, Per Teodor",
    "de Marignac, Jean Charles Galissard","Urbain, Georges James, C.",
    "Urbain, Georges Coster, Dirk Hevesy, György Karl von","Ekeberg, Anders Gustaf",
    "D'Elhuyar, Don Juan José D'Elhuyar, Don Fausto",
    "Noddack, Walter Karl Friedrich Noddack, Ida Eva Tacke Berg, Otto","Tennant, Smithson","Tennant, Smithson",
    "N/A","N/A","N/A","Crookes, Sir William","N/A","N/A","Curie, Marie",
    "Corson, Dale Raymond Mackenzie, Kenneth Ross Segrè, Emilio Gino","Dorn, Friedrich Ernst",
    "Perey, Marguerite Catherine","Curie, Marie (Manya née Sklodowska) Curie, Pierre","Debierne, André Louis",
    "Berzelius, Jöns Jakob",
    "Hahn, Otto Meitner, Lise Soddy, Frederick Cranston, John A. Fleck, Sir Alexander, Baron Fajans, Kasimir Göhring, Otto H.",
    "Klaproth, Martin Heinrich","McMillan, Edwin M. Abelson, Philip Hauge",
    "Seaborg, Glenn T. Wahl, Arthur Charles Kennedy, J.W.",
    "Seaborg, Glenn T. James, Ralph Arthur Morgan, Leon Owen Ghiorso, Albert",
    "Seaborg, Glenn T. James, R.A. Ghiorso, Albert","Thompson, S.G. Seaborg, Glenn T. Ghiorso, Albert",
    "Thompson, S.G. Seaborg, Glenn T. Ghiorso, Albert Street, Jr., Kenneth",
    "Choppin, Gregory Robert Thompson, Stanley Gerald Harvey, Bernard George Ghiorso, Albert",
    "Choppin, Gregory Robert Thompson, S.G. Harvey, B.G. Ghiorso, Albert",
    "Choppin, Gregory Robert Thompson, S.G. Harvey, B.G. Ghiorso, Albert Seaborg, Glenn T.","Sikkeland, Torbjorn Walton, John Richard Ghiorso, Albert Seaborg, Glenn T.",
    "Larsh, Almon E. Sikkeland, Torbjorn Ghiorso, Albert Latimer, Robert M.","Flerov, G.N. Zvara, I.I. Ghiorso, Albert",
    "Flerov, G.N. Ghiorso, Albert","Ghiorso, Albert","Armbruster, Peter Münzenberg, Gottfried",
    "Armbruster, Peter Münzenberg,Gottfried","Armbruster, Peter Münzenberg, Gottfried"};

    char space[109][109] = {"London, England","London, England","Stockholm, Sweden","Paris, France",
    "Paris, France London,England","pre-history","Edinburgh, Scotland","Leeds, England Uppsala, Sweden",
    "Paris, France","London, England","London, England","Edinburgh, Scotland","Copenhagen, Denmark",
    "Stockholm, Sweden","Hamburg, Germany","pre-history","Uppsala, Sweden","London, England Bristol, England",
    "London, England","London, England","Uppsala, Sweden","Creed, Cornwall, England Berlin, Germany",
    "Mexico City, Mexico","Paris, France","Stockholm, Sweden","c. 2500 BC","Stockholm, Sweden",
    "Stockholm, Sweden","c. 5000 BC","pre 1500; 1374","Paris, France","Freiberg, Germany","Germany",
    "Stockholm, Sweden","Montpellier, France Heidelberg, Germany","London, England","Heidelberg, Germany",
    "Strontian, Scotland Edinburgh, Scotland","Åbo, Finland","Berlin, Germany","London, England","Uppsala, Sweden",
    "Berlin, Germany Palermo, Sicily, Italy","Vilno, Poland","London, England","London, England","c. 3000 BC",
    "London, England","Freiberg, Germany","c. 2100 BC","c. 1600 BC","Sibiu, Romania","Paris, France",
    "London, England","Heidelberg, Germany","London, England","Stockholm, Sweden","Västmanland, Sweden",
    "Vienna, Austria","Stockholm, Sweden Vienna, Austria","Oak Ridge, USA","Paris, France","Paris, France",
    "Geneva, Switzerland Paris, France","Stockholm, Sweden","Paris, France","Uppsala, Sweden Geneva, Switzerland",
    "Stockholm, Sweden","Uppsala, Sweden","Geneva, Switzerland","Paris, France New Hampshire, USA",
    "Paris, France Copenhagen, Denmark","Uppsala, Sweden","Vergara, Spain","Berlin, Germany","London, England",
    "London, England","pre 1700","c. 3000 BC","c. 1500 BC","London, England","c. 1000 BC","c. 1500","Paris, France",
    "Berkeley, California, USA","Halle, Germany","Paris, France","Paris, France","Paris, France",
    "Stockholm, Sweden","Berlin, Germany","Berlin, Germany","Berkeley, California, USA","Berkeley, California, USA",
    "Chicago, Illinois, USA","Berkeley, California, USA","Berkeley, California, USA","Berkeley, California, USA",
    "Berkeley, California, USA","Berkeley, California, USA","Berkeley, California, USA","Berkeley, California, USA",
    "Berkeley, California, USA","Dubna, Russia Berkeley, California, USA","Dubna, Russia Berkeley, California, USA",
    "Berkeley, California, USA","Darmstadt, Germany","Darmstadt, Germany","Darmstadt, Germany"};

    char date[109][109] = {"1766","1868 1895","1817/1818","1797","1808","pre history","1772","1774","1886","1898",
    "1807","1755","1825","1824","1669","1774","1894","1807","1808","1879","1791 1795","1801","1797","1774",
    "c.2500 BC","1735","1751","c.5000 BC","pre 1500: 1374","1875","1886","c.1250","1817","1826","1898","1861",
    "1792 1808","1794","1789","1801","1781","1925 1937","1808 1828 1844","1803","1803","c.3000 BC","1817 1817",
    "1863","c.2100 BC","c.1600 BC","1782-1783","1811","1898","1860","1808","1839","1803","1885","1841 1885",
    "1945","1878 1879","1896 1901","1886 1886","1843","1878 1886","1878","1842-1843","1879","1878","1907",
    "1911 1923","1802","1783","1925","1803","1803","pre 1700","c.3000 BC","c.1500 BC","1861","c.1000 BC",
    "c.1500","1898","1940","1900","1939","1898","1899","1815 1828","1917","1789","1940","1940","1944","1944",
    "1949","1950","1952","1952","1955","1958","1961","1964","1967","1974","1981","1984","1982"};

    printf("                     Periodic Table\n\n");

    printf("Enter 0 :- To see total periodic table \n\n");
    printf("Enter 1 :- Search by elements name \n\n");
    printf("Enter 2 :- Search by elements symbol \n\n");
    printf("Enter 3 :- Search by elements atomic number \n\n");
    printf("Enter 4 :- Search by elements atomic mass \n\n");
    printf("                  Enter here : ");

    scanf("%d",&i);

    printf("\n\n");

    switch(i)
    {
        case 0:


            printf("    Enter  0 :- To see Hydrogen to Nion \n\n");
            printf("    Enter  1 :- To see Sodium to Calcium \n\n");
            printf("    Enter  2 :- To see Scandium to Zinc \n\n");
            printf("    Enter  3 :- To see Gallium to Zirconium \n\n");
            printf("    Enter  4 :- To see Niobium to Tin \n\n");
            printf("    Enter  5 :- To see Antimony to Neodymium \n\n");
            printf("    Enter  6 :- To see Promethium to Ytterbium \n\n");
            printf("    Enter  7 :- To see Lutetium to Mercury \n\n");
            printf("    Enter  8 :- To see Thallim to Thorium \n\n");
            printf("    Enter  9 :- To see Protactinium to Fermium \n\n");
            printf("    Enter 10 :- To see Mendelevium to Meitnerium \n\n");
            printf("                       Enter here : ");

            scanf("%d",&i);

            printf("\n\n");

            switch(i)
            {
                case 0:

                    for(i=0; i<10; i++)
                    {
                        printf("    Element name : %s\n\n",(element[i]));
                        printf("        Symbol               : %s\n\n",(symbol[i]));
                        printf("        Atomic number        : %d\n\n",i+1);
                        printf("        Relative atomic mass : %s\n\n",(mass[i]));
                        printf("        Melting point        : %s\n\n",(melting[i]));
                        printf("        Boiling point        : %s\n\n",(boiling[i]));
                        printf("        Electronegativity    : %s\n\n",(Negativity[i]));
                        printf("        Oxidation number     : %s\n\n",(oxidation[i]));
                        printf("        Electron emission    : %s\n\n",(emission[i]));
                        printf("        Inventor             : %s\n\n",(inventor[i]));
                        printf("        Discovery space      : %s\n\n",(space[i]));
                        printf("        During discovery     : %s\n\n\n\n",(date[i]));
                    }

                    break;

                case 1:

                    for(i=10; i<20; i++)
                    {
                        printf("    Element name : %s\n\n",(element[i]));
                        printf("        Symbol               : %s\n\n",(symbol[i]));
                        printf("        Atomic number        : %d\n\n",i+1);
                        printf("        Relative atomic mass : %s\n\n",(mass[i]));
                        printf("        Melting point        : %s\n\n",(melting[i]));
                        printf("        Boiling point        : %s\n\n",(boiling[i]));
                        printf("        Electronegativity    : %s\n\n",(Negativity[i]));
                        printf("        Oxidation number     : %s\n\n",(oxidation[i]));
                        printf("        Electron emission    : %s\n\n",(emission[i]));
                        printf("        Inventor             : %s\n\n",(inventor[i]));
                        printf("        Discovery space      : %s\n\n",(space[i]));
                        printf("        During discovery     : %s\n\n\n\n",(date[i]));
                    }

                    break;

                case 2:

                    for(i=20; i<30; i++)
                    {
                        printf("    Element name : %s\n\n",(element[i]));
                        printf("        Symbol               : %s\n\n",(symbol[i]));
                        printf("        Atomic number        : %d\n\n",i+1);
                        printf("        Relative atomic mass : %s\n\n",(mass[i]));
                        printf("        Melting point        : %s\n\n",(melting[i]));
                        printf("        Boiling point        : %s\n\n",(boiling[i]));
                        printf("        Electronegativity    : %s\n\n",(Negativity[i]));
                        printf("        Oxidation number     : %s\n\n",(oxidation[i]));
                        printf("        Electron emission    : %s\n\n",(emission[i]));
                        printf("        Inventor             : %s\n\n",(inventor[i]));
                        printf("        Discovery space      : %s\n\n",(space[i]));
                        printf("        During discovery     : %s\n\n\n\n",(date[i]));
                    }

                    break;

                case 3:

                    for(i=30; i<40; i++)
                    {
                        printf("    Element name : %s\n\n",(element[i]));
                        printf("        Symbol               : %s\n\n",(symbol[i]));
                        printf("        Atomic number        : %d\n\n",i+1);
                        printf("        Relative atomic mass : %s\n\n",(mass[i]));
                        printf("        Melting point        : %s\n\n",(melting[i]));
                        printf("        Boiling point        : %s\n\n",(boiling[i]));
                        printf("        Electronegativity    : %s\n\n",(Negativity[i]));
                        printf("        Oxidation number     : %s\n\n",(oxidation[i]));
                        printf("        Electron emission    : %s\n\n",(emission[i]));
                        printf("        Inventor             : %s\n\n",(inventor[i]));
                        printf("        Discovery space      : %s\n\n",(space[i]));
                        printf("        During discovery     : %s\n\n\n\n",(date[i]));
                    }

                    break;

                case 4:

                    for(i=40; i<50; i++)
                    {
                        printf("    Element name : %s\n\n",(element[i]));
                        printf("        Symbol               : %s\n\n",(symbol[i]));
                        printf("        Atomic number        : %d\n\n",i+1);
                        printf("        Relative atomic mass : %s\n\n",(mass[i]));
                        printf("        Melting point        : %s\n\n",(melting[i]));
                        printf("        Boiling point        : %s\n\n",(boiling[i]));
                        printf("        Electronegativity    : %s\n\n",(Negativity[i]));
                        printf("        Oxidation number     : %s\n\n",(oxidation[i]));
                        printf("        Electron emission    : %s\n\n",(emission[i]));
                        printf("        Inventor             : %s\n\n",(inventor[i]));
                        printf("        Discovery space      : %s\n\n",(space[i]));
                        printf("        During discovery     : %s\n\n\n\n",(date[i]));
                    }

                    break;

                case 5:

                    for(i=50; i<60; i++)
                    {
                        printf("    Element name : %s\n\n",(element[i]));
                        printf("        Symbol               : %s\n\n",(symbol[i]));
                        printf("        Atomic number        : %d\n\n",i+1);
                        printf("        Relative atomic mass : %s\n\n",(mass[i]));
                        printf("        Melting point        : %s\n\n",(melting[i]));
                        printf("        Boiling point        : %s\n\n",(boiling[i]));
                        printf("        Electronegativity    : %s\n\n",(Negativity[i]));
                        printf("        Oxidation number     : %s\n\n",(oxidation[i]));
                        printf("        Electron emission    : %s\n\n",(emission[i]));
                        printf("        Inventor             : %s\n\n",(inventor[i]));
                        printf("        Discovery space      : %s\n\n",(space[i]));
                        printf("        During discovery     : %s\n\n\n\n",(date[i]));
                    }

                    break;

                case 6:

                    for(i=60; i<70; i++)
                    {
                        printf("    Element name : %s\n\n",(element[i]));
                        printf("        Symbol               : %s\n\n",(symbol[i]));
                        printf("        Atomic number        : %d\n\n",i+1);
                        printf("        Relative atomic mass : %s\n\n",(mass[i]));
                        printf("        Melting point        : %s\n\n",(melting[i]));
                        printf("        Boiling point        : %s\n\n",(boiling[i]));
                        printf("        Electronegativity    : %s\n\n",(Negativity[i]));
                        printf("        Oxidation number     : %s\n\n",(oxidation[i]));
                        printf("        Electron emission    : %s\n\n",(emission[i]));
                        printf("        Inventor             : %s\n\n",(inventor[i]));
                        printf("        Discovery space      : %s\n\n",(space[i]));
                        printf("        During discovery     : %s\n\n\n\n",(date[i]));
                    }

                    break;

                case 7:

                    for(i=70; i<80; i++)
                    {
                        printf("    Element name : %s\n\n",(element[i]));
                        printf("        Symbol               : %s\n\n",(symbol[i]));
                        printf("        Atomic number        : %d\n\n",i+1);
                        printf("        Relative atomic mass : %s\n\n",(mass[i]));
                        printf("        Melting point        : %s\n\n",(melting[i]));
                        printf("        Boiling point        : %s\n\n",(boiling[i]));
                        printf("        Electronegativity    : %s\n\n",(Negativity[i]));
                        printf("        Oxidation number     : %s\n\n",(oxidation[i]));
                        printf("        Electron emission    : %s\n\n",(emission[i]));
                        printf("        Inventor             : %s\n\n",(inventor[i]));
                        printf("        Discovery space      : %s\n\n",(space[i]));
                        printf("        During discovery     : %s\n\n\n\n",(date[i]));
                    }

                    break;

                case 8:

                    for(i=80; i<90; i++)
                    {
                        printf("    Element name : %s\n\n",(element[i]));
                        printf("        Symbol               : %s\n\n",(symbol[i]));
                        printf("        Atomic number        : %d\n\n",i+1);
                        printf("        Relative atomic mass : %s\n\n",(mass[i]));
                        printf("        Melting point        : %s\n\n",(melting[i]));
                        printf("        Boiling point        : %s\n\n",(boiling[i]));
                        printf("        Electronegativity    : %s\n\n",(Negativity[i]));
                        printf("        Oxidation number     : %s\n\n",(oxidation[i]));
                        printf("        Electron emission    : %s\n\n",(emission[i]));
                        printf("        Inventor             : %s\n\n",(inventor[i]));
                        printf("        Discovery space      : %s\n\n",(space[i]));
                        printf("        During discovery     : %s\n\n\n\n",(date[i]));
                    }

                    break;

                case 9:

                    for(i=90; i<100; i++)
                    {
                        printf("    Element name : %s\n\n",(element[i]));
                        printf("        Symbol               : %s\n\n",(symbol[i]));
                        printf("        Atomic number        : %d\n\n",i+1);
                        printf("        Relative atomic mass : %s\n\n",(mass[i]));
                        printf("        Melting point        : %s\n\n",(melting[i]));
                        printf("        Boiling point        : %s\n\n",(boiling[i]));
                        printf("        Electronegativity    : %s\n\n",(Negativity[i]));
                        printf("        Oxidation number     : %s\n\n",(oxidation[i]));
                        printf("        Electron emission    : %s\n\n",(emission[i]));
                        printf("        Inventor             : %s\n\n",(inventor[i]));
                        printf("        Discovery space      : %s\n\n",(space[i]));
                        printf("        During discovery     : %s\n\n\n\n",(date[i]));
                    }

                    break;

                case 10:

                    for(i=100; i<109; i++)
                    {
                        printf("    Element name : %s\n\n",(element[i]));
                        printf("        Symbol               : %s\n\n",(symbol[i]));
                        printf("        Atomic number        : %d\n\n",i+1);
                        printf("        Relative atomic mass : %s\n\n",(mass[i]));
                        printf("        Melting point        : %s\n\n",(melting[i]));
                        printf("        Boiling point        : %s\n\n",(boiling[i]));
                        printf("        Electronegativity    : %s\n\n",(Negativity[i]));
                        printf("        Oxidation number     : %s\n\n",(oxidation[i]));
                        printf("        Electron emission    : %s\n\n",(emission[i]));
                        printf("        Inventor             : %s\n\n",(inventor[i]));
                        printf("        Discovery space      : %s\n\n",(space[i]));
                        printf("        During discovery     : %s\n\n\n\n",(date[i]));
                    }

                    break;

                default:

                    printf("No data found\n");

                    break;

            }

            break;

        case 1:

            printf("    Enter an element name : ");
            scanf("%s",search);

            for(i=0;i<109;i++)
            {
                if(strstr(element[i], search) != NULL)
                {
                    printf("\n\n        Symbol               : %s\n\n",(symbol[i]));
                    printf("        Atomic number        : %d\n\n",i+1);
                    printf("        Relative atomic mass : %s\n\n",(mass[i]));
                    printf("        Melting point        : %s\n\n",(melting[i]));
                    printf("        Boiling point        : %s\n\n",(boiling[i]));
                    printf("        Electronegativity    : %s\n\n",(Negativity[i]));
                    printf("        Oxidation number     : %s\n\n",(oxidation[i]));
                    printf("        Electron emission    : %s\n\n",(emission[i]));
                    printf("        Inventor             : %s\n\n",(inventor[i]));
                    printf("        Discovery space      : %s\n\n",(space[i]));
                    printf("        During discovery     : %s\n\n\n\n",(date[i]));
                }
            }

            break;

        case 2:

            printf("    Enter an element symbol : ");
            scanf("%s",search);

            for(i=0;i<109;i++)
            {
                if(strstr(symbol[i], search) != NULL)
                {
                    printf("\n\n        Name                 : %s\n\n",(element[i]));
                    printf("        Atomic number        : %d\n\n",i+1);
                    printf("        Relative atomic mass : %s\n\n",(mass[i]));
                    printf("        Melting point        : %s\n\n",(melting[i]));
                    printf("        Boiling point        : %s\n\n",(boiling[i]));
                    printf("        Electronegativity    : %s\n\n",(Negativity[i]));
                    printf("        Oxidation number     : %s\n\n",(oxidation[i]));
                    printf("        Electron emission    : %s\n\n",(emission[i]));
                    printf("        Inventor             : %s\n\n",(inventor[i]));
                    printf("        Discovery space      : %s\n\n",(space[i]));
                    printf("        During discovery     : %s\n\n\n\n",(date[i]));
                }
            }

            break;

        case 3:

            printf("    Enter an element's atomic number : ");
            scanf("%d",&i);

            printf("\n\n");
            printf("        Name                 : %s\n\n",(element[i]));
            printf("        Symbol               : %s\n\n",(symbol[i]));
            printf("        Relative atomic mass : %s\n\n",(mass[i]));
            printf("        Melting point        : %s\n\n",(melting[i]));
            printf("        Boiling point        : %s\n\n",(boiling[i]));
            printf("        Electronegativity    : %s\n\n",(Negativity[i]));
            printf("        Oxidation number     : %s\n\n",(oxidation[i]));
            printf("        Electron emission    : %s\n\n",(emission[i]));
            printf("        Inventor             : %s\n\n",(inventor[i]));
            printf("        Discovery space      : %s\n\n",(space[i]));
            printf("        During discovery     : %s\n\n\n\n",(date[i]));

            break;

        case 4:

            printf("    Enter an element's relative atomic mass : ");
            scanf("%s",search);

            for(i=0;i<109;i++)
            {
                if(strstr(mass[i], search) != NULL)
                {
                    printf("\n\n        Name : %s\n\n",(element[i]));
                    printf("        Symbol               : %s\n\n",(symbol[i]));
                    printf("        Atomic number        : %d\n\n",i+1);
                    printf("        Melting point        : %s\n\n",(melting[i]));
                    printf("        Boiling point        : %s\n\n",(boiling[i]));
                    printf("        Electronegativity    : %s\n\n",(Negativity[i]));
                    printf("        Oxidation number     : %s\n\n",(oxidation[i]));
                    printf("        Electron emission    : %s\n\n",(emission[i]));
                    printf("        Inventor             : %s\n\n",(inventor[i]));
                    printf("        Discovery space      : %s\n\n",(space[i]));
                    printf("        During discovery     : %s\n\n\n\n",(date[i]));
                }
            }

            break;

        default:

            printf("No data found\n");

            break;
    }

    getch();

    return 0;
}
