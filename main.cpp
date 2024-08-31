#include <chrono>
#include <thread> 
#include <iostream>

using namespace std;

int main()
{
	double drop = 0.005;
	double avTap = 17.5;
	int bathtime;
	int seedrops;
	

	cout << "Please Write Your Bath Time (minute format, like : 15 min.)" << '\n';
	cin >> bathtime;

	double resdrop = bathtime * avTap;

	double showdropAmount = resdrop / drop;
	int ltToMl = resdrop * 1000;

	cout << "You are using " << resdrop	 << " liters & " << ltToMl << " ml of water." << '\n';
	cout << "If you want to see how many water drops you are spending, press '1': " << '\n';
	cin >> seedrops;
	if (seedrops == 1)
	{
		cout << showdropAmount << " drops spent." << '\n';
		cerr << "Save Water, Save Our Planet. Every drop counts!" << endl;
		this_thread::sleep_for(chrono::seconds(5)); 
	}
	else
	{
		cout << "App closing..." << endl;
		cerr << "Save Water, Save Our Planet. Every drop counts!" << endl;
		this_thread::sleep_for(chrono::seconds(5)); 
	}

	return 0;
}
