#include <iostream>
#include <numeric>
#include <string>
#include <array>
#include <vector>
#include <iomanip>
#include <algorithm>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::array;
using std::vector;
using std::setw;
using std::left;
using std::right;
using std::fixed;
using std::setprecision;
using std::sort;
using std::domain_error;

extern char skaiciavimo_Strategija;
extern string failoVardas;

class studentas {
	string vard, pav;
	/// array<int, 10> paz;
	vector<int> paz;
	int egz;
	float rez;
public:
	studentas();
	studentas(string v, string p, vector<int>pp, int e);
	studentas(const studentas& temp);
	studentas& operator=(const studentas& temp);
	~studentas();
	// Getter
	inline string getVardas() { return vard; }
	inline int getPazNr() { return paz.size(); }
	// Setter
	inline void setVardas(string t) { vard = t; }

	void printas();
	void printasRez();
	void rezVid();
	void rezMed();
	//Duomenø ávedimo metodas(perdengtas cin)
	//Duomenø iðvedimo metodas(perdengtas cout)
	//Galutinio paþymio skaièiavimo metodas(pagal medianà arba vidurká - renkasi þmogus)
	// mediana arba vidurkis - renkasi þmogus
	double mediana(vector<int> vec);
//	double galBalas(double egzaminas, const vector<double>& nd, double (*kriterijus)(vector<double>) = mediana);
};