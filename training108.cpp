// // Create Vector
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int> vtemp)
// {
// 	cout<<endl;
// 	for (int i=0; i<vtemp.size(); ++i)
// 	{
// 		cout<<vtemp.at(i)<<" ";
// 	}
// 	cout<<endl;
// }
// int main(){
// 	vector<int> vxy;
// 	vector<int> vx(3); //declares a vector of size 3
// 	display(vx);
	
// 	vector<int> vz(3,10); 
// 	display(vz);
	
// 	vector<int> vt = {1,2,3}; 
// 	display(vt);
	
// 	vector<int> vn(vt);
// 	display(vn);
	
// 	vector<int> vm(vt.begin()+1, vt.end()-1);
// 	display(vm);
// 	//Accessing elements of a vector
// 	cout<<endl<<" First Element"<<vt.at(0);
// 	cout<<endl<<" First Element"<<vt.front();
// 	cout<<endl<<" Last Element"<<vt.back();
// 	vt.reserve(15);
// 	cout<<endl<<"Size of Vector   "<<vt.size();
// 	cout<<endl<<"Capacity of Vector" << vt.capacity();
// 	cout<<endl<<"Is Vector is Empty  "<<vt.empty();
// 	return 0;
// }
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& vtemp) // pass by reference to avoid copying
{
	cout << endl;
    for(vector<int>::iterator it = vtemp.begin(); it != vtemp.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vx;
    vx.push_back(10);
    vx.push_back(20);
    vx.push_back(30);
    display(vx);
    vx.emplace_back(40);
    display(vx);
    vx.pop_back();
    display(vx);
    vx.erase(vx.begin() + 2);
    display(vx);
    vector<int> vtemp ={1,2,3,4,5};
    display(vtemp);
    vtemp.erase(vtemp.begin()+1,vtemp.end()-1);
    display(vtemp);
    return 0;
}