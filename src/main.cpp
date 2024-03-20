#include <cpr/cpr.h>

#include <util/util.h>

#include <iostream>

int main() {
	std::cout << "Investment Analysis\n";

	std::string url{ "https://data.sec.gov/api/xbrl/companyconcept/CIK0000320193/us-gaap/AccountsPayableCurrent.json" };
	cpr::Response r = cpr::Get(cpr::Url{url},
											cpr::Header{{ "User-Agent", "Won Rhim wwrk22@gmail.com" }});
	std::cout << "status: " << r.status_code
		<< r.header["content-type"]       // application/json; charset=utf-8
		<< r.text << '\n';                         // JSON text string

	return 0;
}
