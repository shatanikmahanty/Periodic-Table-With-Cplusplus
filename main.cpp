#include <bits/stdc++.h>

using namespace std;

class Element {
   public:
    int atomicNumber;
    string symbol;
    string name;
    string atomicMass;
    int atomicRadius;
    int boilingPiont;
    int meltingPoint;
    string bondingType;
    double density;
    int electronAffinity;
    double electronegativity;
    string electronicConfiguration;
    string groupBlock;
    int ionizationEnergy;
    string oxidationStates;
    int vanDelWaalsRadius;
    string yearDiscovered;

    Element(int an, string s, string n) {
        atomicNumber = an;
        symbol = s;
        name = n;
    }

    Element(int an, string s, string n, string am, string ec, string gb, string yd) {
        atomicNumber = an;
        symbol = s;
        name = n;
        atomicMass = am;
        electronicConfiguration = ec;
        groupBlock = gb;
        yearDiscovered = yd;   
    }

    Element(int an, string s, string n, string am, int ar, int bp, int mp, string bt,
            double d, int ea, double e, string ec, string gb, int ie, string os,
            int vdwr, string yd) {
        atomicNumber = an;
        symbol = s;
        name = n;
        atomicMass = am;
        atomicRadius = ar;
        boilingPiont = bp;
        meltingPoint = mp;
        bondingType = bt;
        density = d;
        electronAffinity = ea;
        electronegativity = e;
        electronicConfiguration = ec;
        groupBlock = gb;
        ionizationEnergy = ie;
        oxidationStates = os;
        vanDelWaalsRadius = vdwr;
        yearDiscovered = yd;
    }
};

void add_elements(vector<Element>& elements) {
    Element hydrogen(1, "H", "Hydrogen", "1.00794(4)", "1s1", "nonmetal", "1766");
elements.push_back(hydrogen);

Element helium(2, "He", "Helium", "4.002602(2)", "1s2", "noble gas", "1868");
elements.push_back(helium);

Element lithium(3, "Li", "Lithium", "6.941(2)", "[He] 2s1", "alkali metal", "1817");
elements.push_back(lithium);

Element beryllium(4, "Be", "Beryllium", "9.012182(3)", "[He] 2s2", "alkaline earth metal", "1798");
elements.push_back(beryllium);

Element boron(5, "B", "Boron", "10.811(7)", "[He] 2s2 2p1", "metalloid", "1807");
elements.push_back(boron);

Element carbon(6, "C", "Carbon", "12.0107(8)", "[He] 2s2 2p2", "nonmetal", "Ancient");
elements.push_back(carbon);

Element nitrogen(7, "N", "Nitrogen", "14.0067(2)", "[He] 2s2 2p3", "nonmetal", "1772");
elements.push_back(nitrogen);

Element oxygen(8, "O", "Oxygen", "15.9994(3)", "[He] 2s2 2p4", "nonmetal", "1774");
elements.push_back(oxygen);

Element fluorine(9, "F", "Fluorine", "18.9984032(5)", "[He] 2s2 2p5", "halogen", "1670");
elements.push_back(fluorine);

Element neon(10, "Ne", "Neon", "20.1797(6)", "[He] 2s2 2p6", "noble gas", "1898");
elements.push_back(neon);

Element sodium(11, "Na", "Sodium", "22.98976928(2)", "[Ne] 3s1", "alkali metal", "1807");
elements.push_back(sodium);

Element magnesium(12, "Mg", "Magnesium", "24.3050(6)", "[Ne] 3s2", "alkaline earth metal", "1808");
elements.push_back(magnesium);

Element aluminum(13, "Al", "Aluminum", "26.9815386(8)", "[Ne] 3s2 3p1", "metal", "Ancient");
elements.push_back(aluminum);

Element silicon(14, "Si", "Silicon", "28.0855(3)", "[Ne] 3s2 3p2", "metalloid", "1854");
elements.push_back(silicon);

Element phosphorus(15, "P", "Phosphorus", "30.973762(2)", "[Ne] 3s2 3p3", "nonmetal", "1669");
elements.push_back(phosphorus);

Element sulfur(16, "S", "Sulfur", "32.065(5)", "[Ne] 3s2 3p4", "nonmetal", "Ancient");
elements.push_back(sulfur);

Element chlorine(17, "Cl", "Chlorine", "35.453(2)", "[Ne] 3s2 3p5", "halogen", "1774");
elements.push_back(chlorine);

Element argon(18, "Ar", "Argon", "39.948(1)", "[Ne] 3s2 3p6", "noble gas", "1894");
elements.push_back(argon);

Element potassium(19, "K", "Potassium", "39.0983(1)", "[Ar] 4s1", "alkali metal", "1807");
elements.push_back(potassium);

Element calcium(20, "Ca", "Calcium", "40.078(4)", "[Ar] 4s2", "alkaline earth metal", "Ancient");
elements.push_back(calcium);

Element scandium(21, "Sc", "Scandium", "44.955912(6)", "[Ar] 3d1 4s2", "transition metal", "1876");
elements.push_back(scandium);

Element titanium(22, "Ti", "Titanium", "47.867(1)", "[Ar] 3d2 4s2", "transition metal", "1791");
elements.push_back(titanium);

Element vanadium(23, "V", "Vanadium", "50.9415(1)", "[Ar] 3d3 4s2", "transition metal", "1803");
elements.push_back(vanadium);

Element chromium(24, "Cr", "Chromium", "51.9961(6)", "[Ar] 3d5 4s1", "transition metal", "Ancient");
elements.push_back(chromium);

Element manganese(25, "Mn", "Manganese", "54.938045(5)", "[Ar] 3d5 4s2", "transition metal", "1774");
elements.push_back(manganese);

Element iron(26, "Fe", "Iron", "55.845(2)", "[Ar] 3d6 4s2", "transition metal", "Ancient");
elements.push_back(iron);

Element cobalt(27, "Co", "Cobalt", "58.933195(5)", "[Ar] 3d7 4s2", "transition metal", "Ancient");
elements.push_back(cobalt);

Element nickel(28, "Ni", "Nickel", "58.6934(4)", "[Ar] 3d8 4s2", "transition metal", "1751");
elements.push_back(nickel);

Element copper(29, "Cu", "Copper", "63.546(3)", "[Ar] 3d10 4s1", "transition metal", "Ancient");
elements.push_back(copper);

Element zinc(30, "Zn", "Zinc", "65.38(2)", "[Ar] 3d10 4s2", "transition metal", "1746");
elements.push_back(zinc);

Element gallium(31, "Ga", "Gallium", "69.723(1)", "[Ar] 3d10 4s2 4p1", "metal", "1875");
elements.push_back(gallium);

Element germanium(32, "Ge", "Germanium", "72.64(1)", "[Ar] 3d10 4s2 4p2", "metalloid", "1886");
elements.push_back(germanium);

Element arsenic(33, "As", "Arsenic", "74.92160(2)", "[Ar] 3d10 4s2 4p3", "metalloid", "Ancient");
elements.push_back(arsenic);

Element selenium(34, "Se", "Selenium", "78.96(3)", "[Ar] 3d10 4s2 4p4", "nonmetal", "1817");
elements.push_back(selenium);

Element bromine(35, "Br", "Bromine", "79.904(1)", "[Ar] 3d10 4s2 4p5", "halogen", "1826");
elements.push_back(bromine);

Element krypton(36, "Kr", "Krypton", "83.798(2)", "[Ar] 3d10 4s2 4p6", "noble gas", "1898");
elements.push_back(krypton);

Element rubidium(37, "Rb", "Rubidium", "85.4678(3)", "[Kr] 5s1", "alkali metal", "1861");
elements.push_back(rubidium);

Element strontium(38, "Sr", "Strontium", "87.62(1)", "[Kr] 5s2", "alkaline earth metal", "1790");
elements.push_back(strontium);

Element yttrium(39, "Y", "Yttrium", "88.90585(2)", "[Kr] 4d1 5s2", "transition metal", "1794");
elements.push_back(yttrium);

Element zirconium(40, "Zr", "Zirconium", "91.224(2)", "[Kr] 4d2 5s2", "transition metal", "1789");
elements.push_back(zirconium);

Element niobium(41, "Nb", "Niobium", "92.90638(2)", "[Kr] 4d4 5s1", "transition metal", "1801");
elements.push_back(niobium);

Element molybdenum(42, "Mo", "Molybdenum", "95.96(2)", "[Kr] 4d5 5s1", "transition metal", "1778");
elements.push_back(molybdenum);

Element technetium(43, "Tc", "Technetium", "98", "[Kr] 4d5 5s2", "transition metal", "1937");
elements.push_back(technetium);

Element ruthenium(44, "Ru", "Ruthenium", "101.07(2)", "[Kr] 4d7 5s1", "transition metal", "1827");
elements.push_back(ruthenium);

Element rhodium(45, "Rh", "Rhodium", "102.90550(2)", "[Kr] 4d8 5s1", "transition metal", "1803");
elements.push_back(rhodium);

Element palladium(46, "Pd", "Palladium", "106.42(1)", "[Kr] 4d10", "transition metal", "1803");
elements.push_back(palladium);

Element silver(47, "Ag", "Silver", "107.8682(2)", "[Kr] 4d10 5s1", "transition metal", "Ancient");
elements.push_back(silver);

Element cadmium(48, "Cd", "Cadmium", "112.411(8)", "[Kr] 4d10 5s2", "transition metal", "1817");
elements.push_back(cadmium);

Element indium(49, "In", "Indium", "114.818(3)", "[Kr] 4d10 5s2 5p1", "metal", "1863");
elements.push_back(indium);

Element tin(50, "Sn", "Tin", "118.710(7)", "[Kr] 4d10 5s2 5p2", "metal", "Ancient");
elements.push_back(tin);

Element antimony(51, "Sb", "Antimony", "121.760(1)", "[Kr] 4d10 5s2 5p3", "metalloid", "Ancient");
elements.push_back(antimony);

Element tellurium(52, "Te", "Tellurium", "127.60(3)", "[Kr] 4d10 5s2 5p4", "metalloid", "1782");
elements.push_back(tellurium);

Element iodine(53, "I", "Iodine", "126.90447(3)", "[Kr] 4d10 5s2 5p5", "halogen", "1811");
elements.push_back(iodine);

Element xenon(54, "Xe", "Xenon", "131.293(6)", "[Kr] 4d10 5s2 5p6", "noble gas", "1898");
elements.push_back(xenon);

Element cesium(55, "Cs", "Cesium", "132.9054519(2)", "[Xe] 6s1", "alkali metal", "1860");
elements.push_back(cesium);

Element barium(56, "Ba", "Barium", "137.327(7)", "[Xe] 6s2", "alkaline earth metal", "1808");
elements.push_back(barium);

Element lanthanum(57, "La", "Lanthanum", "138.90547(7)", "[Xe] 5d1 6s2", "lanthanoid", "1839");
elements.push_back(lanthanum);

Element cerium(58, "Ce", "Cerium", "140.116(1)", "[Xe] 4f1 5d1 6s2", "lanthanoid", "1803");
elements.push_back(cerium);

Element praseodymium(59, "Pr", "Praseodymium", "140.90765(2)", "[Xe] 4f3 6s2", "lanthanoid", "1885");
elements.push_back(praseodymium);

Element neodymium(60, "Nd", "Neodymium", "144.242(3)", "[Xe] 4f4 6s2", "lanthanoid", "1885");
elements.push_back(neodymium);

Element promethium(61, "Pm", "Promethium", "145", "[Xe] 4f5 6s2", "lanthanoid", "1947");
elements.push_back(promethium);

Element samarium(62, "Sm", "Samarium", "150.36(2)", "[Xe] 4f6 6s2", "lanthanoid", "1853");
elements.push_back(samarium);

Element europium(63, "Eu", "Europium", "151.964(1)", "[Xe] 4f7 6s2", "lanthanoid", "1901");
elements.push_back(europium);

Element gadolinium(64, "Gd", "Gadolinium", "157.25(3)", "[Xe] 4f7 5d1 6s2", "lanthanoid", "1880");
elements.push_back(gadolinium);

Element terbium(65, "Tb", "Terbium", "158.92535(2)", "[Xe] 4f9 6s2", "lanthanoid", "1843");
elements.push_back(terbium);

Element dysprosium(66, "Dy", "Dysprosium", "162.500(1)", "[Xe] 4f10 6s2", "lanthanoid", "1886");
elements.push_back(dysprosium);

Element holmium(67, "Ho", "Holmium", "164.93032(2)", "[Xe] 4f11 6s2", "lanthanoid", "1878");
elements.push_back(holmium);

Element erbium(68, "Er", "Erbium", "167.259(3)", "[Xe] 4f12 6s2", "lanthanoid", "1842");
elements.push_back(erbium);

Element thulium(69, "Tm", "Thulium", "168.93421(2)", "[Xe] 4f13 6s2", "lanthanoid", "1879");
elements.push_back(thulium);

Element ytterbium(70, "Yb", "Ytterbium", "173.054(5)", "[Xe] 4f14 6s2", "lanthanoid", "1878");
elements.push_back(ytterbium);

Element lutetium(71, "Lu", "Lutetium", "174.9668(1)", "[Xe] 4f14 5d1 6s2", "lanthanoid", "1907");
elements.push_back(lutetium);

Element hafnium(72, "Hf", "Hafnium", "178.49(2)", "[Xe] 4f14 5d2 6s2", "transition metal", "1923");
elements.push_back(hafnium);

Element tantalum(73, "Ta", "Tantalum", "180.94788(2)", "[Xe] 4f14 5d3 6s2", "transition metal", "1802");
elements.push_back(tantalum);

Element tungsten(74, "W", "Tungsten", "183.84(1)", "[Xe] 4f14 5d4 6s2", "transition metal", "1783");
elements.push_back(tungsten);

Element rhenium(75, "Re", "Rhenium", "186.207(1)", "[Xe] 4f14 5d5 6s2", "transition metal", "1925");
elements.push_back(rhenium);

Element osmium(76, "Os", "Osmium", "190.23(3)", "[Xe] 4f14 5d6 6s2", "transition metal", "1803");
elements.push_back(osmium);

Element iridium(77, "Ir", "Iridium", "192.217(3)", "[Xe] 4f14 5d7 6s2", "transition metal", "1803");
elements.push_back(iridium);

Element platinum(78, "Pt", "Platinum", "195.084(9)", "[Xe] 4f14 5d9 6s1", "transition metal", "Ancient");
elements.push_back(platinum);

Element gold(79, "Au", "Gold", "196.966569(4)", "[Xe] 4f14 5d10 6s1", "transition metal", "Ancient");
elements.push_back(gold);

Element mercury(80, "Hg", "Mercury", "200.59(2)", "[Xe] 4f14 5d10 6s2", "transition metal", "Ancient");
elements.push_back(mercury);

Element thallium(81, "Tl", "Thallium", "204.3833(2)", "[Xe] 4f14 5d10 6s2 6p1", "metal", "1861");
elements.push_back(thallium);

Element lead(82, "Pb", "Lead", "207.2(1)", "[Xe] 4f14 5d10 6s2 6p2", "metal", "Ancient");
elements.push_back(lead);

Element bismuth(83, "Bi", "Bismuth", "208.98040(1)", "[Xe] 4f14 5d10 6s2 6p3", "metal", "Ancient");
elements.push_back(bismuth);

Element polonium(84, "Po", "Polonium", "209", "[Xe] 4f14 5d10 6s2 6p4", "metalloid", "1898");
elements.push_back(polonium);

Element astatine(85, "At", "Astatine", "210", "[Xe] 4f14 5d10 6s2 6p5", "halogen", "1940");
elements.push_back(astatine);

Element radon(86, "Rn", "Radon", "222", "[Xe] 4f14 5d10 6s2 6p6", "noble gas", "1900");
elements.push_back(radon);

Element francium(87, "Fr", "Francium", "223", "[Rn] 7s1", "alkali metal", "1939");
elements.push_back(francium);

Element radium(88, "Ra", "Radium", "226", "[Rn] 7s2", "alkaline earth metal", "1898");
elements.push_back(radium);

Element actinium(89, "Ac", "Actinium", "227", "[Rn] 6d1 7s2", "actinoid", "1899");
elements.push_back(actinium);

Element thorium(90, "Th", "Thorium", "232.03806(2)", "[Rn] 6d2 7s2", "actinoid", "1828");
elements.push_back(thorium);

Element protactinium(91, "Pa", "Protactinium", "231.03588(2)", "[Rn] 5f2 6d1 7s2", "actinoid", "1913");
elements.push_back(protactinium);

Element uranium(92, "U", "Uranium", "238.02891(3)", "[Rn] 5f3 6d1 7s2", "actinoid", "1789");
elements.push_back(uranium);

Element neptunium(93, "Np", "Neptunium", "237", "[Rn] 5f4 6d1 7s2", "actinoid", "1940");
elements.push_back(neptunium);

Element plutonium(94, "Pu", "Plutonium", "244", "[Rn] 5f6 7s2", "actinoid", "1940");
elements.push_back(plutonium);

Element americium(95, "Am", "Americium", "243", "[Rn] 5f7 7s2", "actinoid", "1944");
elements.push_back(americium);

Element curium(96, "Cm", "Curium", "247", "[Rn] 5f7 6d1 7s2", "actinoid", "1944");
elements.push_back(curium);

Element berkelium(97, "Bk", "Berkelium", "247", "[Rn] 5f9 7s2", "actinoid", "1949");
elements.push_back(berkelium);

Element californium(98, "Cf", "Californium", "251", "[Rn] 5f10 7s2", "actinoid", "1950");
elements.push_back(californium);

Element einsteinium(99, "Es", "Einsteinium", "252", "[Rn] 5f11 7s2", "actinoid", "1952");
elements.push_back(einsteinium);

Element fermium(100, "Fm", "Fermium", "257", "[Rn] 5f12 7s2", "actinoid", "1952");
elements.push_back(fermium);

Element mendelevium(101, "Md", "Mendelevium", "258", "[Rn] 5f13 7s2", "actinoid", "1955");
elements.push_back(mendelevium);

Element nobelium(102, "No", "Nobelium", "259", "[Rn] 5f14 7s2", "actinoid", "1957");
elements.push_back(nobelium);

Element lawrencium(103, "Lr", "Lawrencium", "262", "[Rn] 5f14 7s2 7p1", "transition metal", "1961");
elements.push_back(lawrencium);

Element rutherfordium(104, "Rf", "Rutherfordium", "267", "[Rn] 5f14 6d2 7s2", "transition metal", "1969");
elements.push_back(rutherfordium);

Element dubnium(105, "Db", "Dubnium", "268", "[Rn] 5f14 6d3 7s2", "transition metal", "1967");
elements.push_back(dubnium);

Element seaborgium(106, "Sg", "Seaborgium", "271", "[Rn] 5f14 6d4 7s2", "transition metal", "1974");
elements.push_back(seaborgium);

Element bohrium(107, "Bh", "Bohrium", "272", "[Rn] 5f14 6d5 7s2", "transition metal", "1976");
elements.push_back(bohrium);

Element hassium(108, "Hs", "Hassium", "270", "[Rn] 5f14 6d6 7s2", "transition metal", "1984");
elements.push_back(hassium);

Element meitnerium(109, "Mt", "Meitnerium", "276", "[Rn] 5f14 6d7 7s2", "transition metal", "1982");
elements.push_back(meitnerium);

Element darmstadtium(110, "Ds", "Darmstadtium", "281", "[Rn] 5f14 6d9 7s1", "transition metal", "1994");
elements.push_back(darmstadtium);

Element roentgenium(111, "Rg", "Roentgenium", "280", "[Rn] 5f14 6d10 7s1", "transition metal", "1994");
elements.push_back(roentgenium);

Element copernicium(112, "Cn", "Copernicium", "285", "[Rn] 5f14 6d10 7s2", "transition metal", "1996");
elements.push_back(copernicium);

Element nihonium(113, "Nh", "Nihonium", "284", "[Rn] 5f14 6d10 7s2 7p1", "post-transition metal", "2003");
elements.push_back(nihonium);

Element flerovium(114, "Fl", "Flerovium", "289", "[Rn] 5f14 6d10 7s2 7p2", "post-transition metal", "1998");
elements.push_back(flerovium);

Element moscovium(115, "Mc", "Moscovium", "288", "[Rn] 5f14 6d10 7s2 7p3", "post-transition metal", "2003");
elements.push_back(moscovium);

Element livermorium(116, "Lv", "Livermorium", "293", "[Rn] 5f14 6d10 7s2 7p4", "post-transition metal", "2000");
elements.push_back(livermorium);

Element tennessine(117, "Ts", "Tennessine", "294", "[Rn] 5f14 6d10 7s2 7p5", "post-transition metal", "2010");
elements.push_back(tennessine);

Element oganesson(118, "Og", "Oganesson", "294", "[Rn] 5f14 6d10 7s2 7p6", "noble gas", "2002");
elements.push_back(oganesson);
}

void print_element(Element element) {
    cout << element.name << endl;
    cout << "\tSymbol : " << element.symbol << endl;
    cout << "\tAtomic Number : " << element.atomicNumber << endl;
    cout << "\tAtomic Mass : " << element.atomicMass << endl;
    cout << "\tElectronic Configuration : " << element.electronicConfiguration << endl;
    cout << "\tGroup Bloc : " << element.groupBlock << endl;
    cout << "\tYear Discovered : " << element.yearDiscovered << endl;
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
        cout << "\t1. Search element by name or symbol" << endl;
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
            }
        }
    }

    return 0;
}
