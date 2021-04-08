#include <bits/stdc++.h>

using namespace std;

class Element {
   public:
    int atomicNumber;
    string symbol;
    string name;

    Element(int an, string s, string n) {
        atomicNumber = an;
        symbol = s;
        name = n;
    }
};

void add_elements(vector<Element>& elements) {
    Element hydrogen(1, "H", "Hydrogen");
    elements.push_back(hydrogen);

    Element helium(2, "He", "Helium");
    elements.push_back(helium);

    Element lithium(3, "Li", "Lithium");
    elements.push_back(lithium);

    Element beryllium(4, "Be", "Beryllium");
    elements.push_back(beryllium);

    Element boron(5, "B", "Boron");
    elements.push_back(boron);

    Element carbon(6, "C", "Carbon");
    elements.push_back(carbon);

    Element nitrogen(7, "N", "Nitrogen");
    elements.push_back(nitrogen);

    Element oxygen(8, "O", "Oxygen");
    elements.push_back(oxygen);

    Element fluorine(9, "F", "Fluorine");
    elements.push_back(fluorine);

    Element neon(10, "Ne", "Neon");
    elements.push_back(neon);

    Element sodium(11, "Na", "Sodium");
    elements.push_back(sodium);

    Element magnesium(12, "Mg", "Magnesium");
    elements.push_back(magnesium);

    Element aluminum(13, "Al", "Aluminum");
    elements.push_back(aluminum);

    Element silicon(14, "Si", "Silicon");
    elements.push_back(silicon);

    Element phosphorus(15, "P", "Phosphorus");
    elements.push_back(phosphorus);

    Element sulfur(16, "S", "Sulfur");
    elements.push_back(sulfur);

    Element chlorine(17, "Cl", "Chlorine");
    elements.push_back(chlorine);

    Element argon(18, "Ar", "Argon");
    elements.push_back(argon);

    Element potassium(19, "K", "Potassium");
    elements.push_back(potassium);

    Element calcium(20, "Ca", "Calcium");
    elements.push_back(calcium);

    Element scandium(21, "Sc", "Scandium");
    elements.push_back(scandium);

    Element titanium(22, "Ti", "Titanium");
    elements.push_back(titanium);

    Element vanadium(23, "V", "Vanadium");
    elements.push_back(vanadium);

    Element chromium(24, "Cr", "Chromium");
    elements.push_back(chromium);

    Element manganese(25, "Mn", "Manganese");
    elements.push_back(manganese);

    Element iron(26, "Fe", "Iron");
    elements.push_back(iron);

    Element cobalt(27, "Co", "Cobalt");
    elements.push_back(cobalt);

    Element nickel(28, "Ni", "Nickel");
    elements.push_back(nickel);

    Element copper(29, "Cu", "Copper");
    elements.push_back(copper);

    Element zinc(30, "Zn", "Zinc");
    elements.push_back(zinc);

    Element gallium(31, "Ga", "Gallium");
    elements.push_back(gallium);

    Element germanium(32, "Ge", "Germanium");
    elements.push_back(germanium);

    Element arsenic(33, "As", "Arsenic");
    elements.push_back(arsenic);

    Element selenium(34, "Se", "Selenium");
    elements.push_back(selenium);

    Element bromine(35, "Br", "Bromine");
    elements.push_back(bromine);

    Element krypton(36, "Kr", "Krypton");
    elements.push_back(krypton);

    Element rubidium(37, "Rb", "Rubidium");
    elements.push_back(rubidium);

    Element strontium(38, "Sr", "Strontium");
    elements.push_back(strontium);

    Element yttrium(39, "Y", "Yttrium");
    elements.push_back(yttrium);

    Element zirconium(40, "Zr", "Zirconium");
    elements.push_back(zirconium);

    Element niobium(41, "Nb", "Niobium");
    elements.push_back(niobium);

    Element molybdenum(42, "Mo", "Molybdenum");
    elements.push_back(molybdenum);

    Element technetium(43, "Tc", "Technetium");
    elements.push_back(technetium);

    Element ruthenium(44, "Ru", "Ruthenium");
    elements.push_back(ruthenium);

    Element rhodium(45, "Rh", "Rhodium");
    elements.push_back(rhodium);

    Element palladium(46, "Pd", "Palladium");
    elements.push_back(palladium);

    Element silver(47, "Ag", "Silver");
    elements.push_back(silver);

    Element cadmium(48, "Cd", "Cadmium");
    elements.push_back(cadmium);

    Element indium(49, "In", "Indium");
    elements.push_back(indium);

    Element tin(50, "Sn", "Tin");
    elements.push_back(tin);

    Element antimony(51, "Sb", "Antimony");
    elements.push_back(antimony);

    Element tellurium(52, "Te", "Tellurium");
    elements.push_back(tellurium);

    Element iodine(53, "I", "Iodine");
    elements.push_back(iodine);

    Element xenon(54, "Xe", "Xenon");
    elements.push_back(xenon);

    Element cesium(55, "Cs", "Cesium");
    elements.push_back(cesium);

    Element barium(56, "Ba", "Barium");
    elements.push_back(barium);

    Element lanthanum(57, "La", "Lanthanum");
    elements.push_back(lanthanum);

    Element cerium(58, "Ce", "Cerium");
    elements.push_back(cerium);

    Element praseodymium(59, "Pr", "Praseodymium");
    elements.push_back(praseodymium);

    Element neodymium(60, "Nd", "Neodymium");
    elements.push_back(neodymium);

    Element promethium(61, "Pm", "Promethium");
    elements.push_back(promethium);

    Element samarium(62, "Sm", "Samarium");
    elements.push_back(samarium);

    Element europium(63, "Eu", "Europium");
    elements.push_back(europium);

    Element gadolinium(64, "Gd", "Gadolinium");
    elements.push_back(gadolinium);

    Element terbium(65, "Tb", "Terbium");
    elements.push_back(terbium);

    Element dysprosium(66, "Dy", "Dysprosium");
    elements.push_back(dysprosium);

    Element holmium(67, "Ho", "Holmium");
    elements.push_back(holmium);

    Element erbium(68, "Er", "Erbium");
    elements.push_back(erbium);

    Element thulium(69, "Tm", "Thulium");
    elements.push_back(thulium);

    Element ytterbium(70, "Yb", "Ytterbium");
    elements.push_back(ytterbium);

    Element lutetium(71, "Lu", "Lutetium");
    elements.push_back(lutetium);

    Element hafnium(72, "Hf", "Hafnium");
    elements.push_back(hafnium);

    Element tantalum(73, "Ta", "Tantalum");
    elements.push_back(tantalum);

    Element tungsten(74, "W", "Tungsten");
    elements.push_back(tungsten);

    Element rhenium(75, "Re", "Rhenium");
    elements.push_back(rhenium);

    Element osmium(76, "Os", "Osmium");
    elements.push_back(osmium);

    Element iridium(77, "Ir", "Iridium");
    elements.push_back(iridium);

    Element platinum(78, "Pt", "Platinum");
    elements.push_back(platinum);

    Element gold(79, "Au", "Gold");
    elements.push_back(gold);

    Element mercury(80, "Hg", "Mercury");
    elements.push_back(mercury);

    Element thallium(81, "Tl", "Thallium");
    elements.push_back(thallium);

    Element lead(82, "Pb", "Lead");
    elements.push_back(lead);

    Element bismuth(83, "Bi", "Bismuth");
    elements.push_back(bismuth);

    Element polonium(84, "Po", "Polonium");
    elements.push_back(polonium);

    Element astatine(85, "At", "Astatine");
    elements.push_back(astatine);

    Element radon(86, "Rn", "Radon");
    elements.push_back(radon);

    Element francium(87, "Fr", "Francium");
    elements.push_back(francium);

    Element radium(88, "Ra", "Radium");
    elements.push_back(radium);

    Element actinium(89, "Ac", "Actinium");
    elements.push_back(actinium);

    Element thorium(90, "Th", "Thorium");
    elements.push_back(thorium);

    Element protactinium(91, "Pa", "Protactinium");
    elements.push_back(protactinium);

    Element uranium(92, "U", "Uranium");
    elements.push_back(uranium);

    Element neptunium(93, "Np", "Neptunium");
    elements.push_back(neptunium);

    Element plutonium(94, "Pu", "Plutonium");
    elements.push_back(plutonium);

    Element americium(95, "Am", "Americium");
    elements.push_back(americium);

    Element curium(96, "Cm", "Curium");
    elements.push_back(curium);

    Element berkelium(97, "Bk", "Berkelium");
    elements.push_back(berkelium);

    Element californium(98, "Cf", "Californium");
    elements.push_back(californium);

    Element einsteinium(99, "Es", "Einsteinium");
    elements.push_back(einsteinium);

    Element fermium(100, "Fm", "Fermium");
    elements.push_back(fermium);

    Element mendelevium(101, "Md", "Mendelevium");
    elements.push_back(mendelevium);

    Element nobelium(102, "No", "Nobelium");
    elements.push_back(nobelium);

    Element lawrencium(103, "Lr", "Lawrencium");
    elements.push_back(lawrencium);

    Element rutherfordium(104, "Rf", "Rutherfordium");
    elements.push_back(rutherfordium);

    Element dubnium(105, "Db", "Dubnium");
    elements.push_back(dubnium);

    Element seaborgium(106, "Sg", "Seaborgium");
    elements.push_back(seaborgium);

    Element bohrium(107, "Bh", "Bohrium");
    elements.push_back(bohrium);

    Element hassium(108, "Hs", "Hassium");
    elements.push_back(hassium);

    Element meitnerium(109, "Mt", "Meitnerium");
    elements.push_back(meitnerium);

    Element darmstadtium(110, "Ds", "Darmstadtium");
    elements.push_back(darmstadtium);

    Element roentgenium(111, "Rg", "Roentgenium");
    elements.push_back(roentgenium);

    Element copernicium(112, "Cn", "Copernicium");
    elements.push_back(copernicium);

    Element nihonium(113, "Nh", "Nihonium");
    elements.push_back(nihonium);

    Element flerovium(114, "Fl", "Flerovium");
    elements.push_back(flerovium);

    Element moscovium(115, "Mc", "Moscovium");
    elements.push_back(moscovium);

    Element livermorium(116, "Lv", "Livermorium");
    elements.push_back(livermorium);

    Element tennessine(117, "Ts", "Tennessine");
    elements.push_back(tennessine);

    Element oganesson(118, "Og", "Oganesson");
    elements.push_back(oganesson);
}

void print_element(Element element) {
    cout << element.name << endl;
    cout << "\tAtomic Number : " << element.atomicNumber << endl;
    cout << "\tSymbol : " << element.symbol << endl;
    cout << endl;
}

void search_by_name_or_symbol(vector<Element>& elements) {
    string name;
    bool found = false;

    cout << "Enter name or symbol: ";
    cin >> name;
    cout << endl;

    for (auto& element : elements) {
        if (element.name.compare(name) == 0 ||
            element.symbol.compare(name) == 0) {
            print_element(element);
            found = true;
        }
    }

    if (!found) {
        cout << "No such element with name or symbol " << name << " is found!"
             << endl
             << endl;
    }
}

void search_by_atomic_number(vector<Element>& elements) {
    int atomicNumber;
    bool found = false;

    cout << "Enter atomic number: ";
    cin >> atomicNumber;
    cout << endl;

    for (auto& element : elements) {
        if (element.atomicNumber == atomicNumber) {
            print_element(element);
            found = true;
        }
    }

    if (!found) {
        if (atomicNumber == 0) {
            cout << "Periodic table doesn't contain massless elements right?"
                 << endl
                 << endl;
        } else if (atomicNumber < 0) {
            cout << "Elment with negative atomic number!! Now we're talking."
                 << endl
                 << endl;
        } else {
            cout << "Element with atomic number " << atomicNumber
                 << " is yet to be discovered." << endl
                 << endl;
        }
    }
}

void display_periodic_table(vector<Element> elements) {
    for (int i = 0; i < elements.size(); ++i) {
        Element element = elements[i];
        int atomicNumber = element.atomicNumber;
        string symbol = element.symbol;
        const char* sy = symbol.c_str();

        if ((i < 56 || i > 69) && (i < 88 || i > 101)) {
            if (i == 1) {
                printf("%85.2s\n", sy);
            } else if (i == 4 || i == 12) {
                printf("%55.2s", sy);
            } else {
                printf("%5.2s", sy);
            }

            if (i == 9 || i == 17 || i == 35 || i == 53 || i == 85 ||
                i == 117) {
                cout << endl;
            }
        }
    }

    for (int i = 56; i < elements.size(); ++i) {
        Element element = elements[i];
        int atomicNumber = element.atomicNumber;
        string symbol = element.symbol;
        const char* sy = symbol.c_str();

        if ((i >= 56 && i <= 69) || (i >= 88 && i <= 101)) {
            if (i == 56 || i == 88) {
                printf("%15.2s", sy);
            } else {
                printf("%5.2s", sy);
            }

            if (i == 69 || i == 101) {
                cout << endl;
            }
        }
    }

    cout << endl << endl;
}

int main(int argc, char const* argv[]) {
    int choice;
    vector<Element> elements;

    add_elements(elements);

    while (true) {
        cout << "\t1. Search element by name or sysmbol" << endl;
        cout << "\t2. Search element by atomic number" << endl;
        cout << "\t3. Display periodic table" << endl;
        cout << "\t4. Exit" << endl;
        cout << "Enter your choice : " << endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                search_by_name_or_symbol(elements);
                break;
            }
            case 2: {
                search_by_atomic_number(elements);
                break;
            }
            case 3: {
                display_periodic_table(elements);
                break;
            }
            case 4: {
                exit(0);
            }
            default: {
                cout << "Unknown input!" << endl;
                break;
            }
        }
    }

    return 0;
}
