#include<iostream>
using namespace std;
class employee{
	public:
	int id;
	string name;
	int salary;
};
int main(){
	employee e1,e2,e3,max;
	e1.id=3569;
	e1.name="sadaf";
	e1.salary=35000;
	e2.id=6834;
	e2.name="zaima";
	e2.salary=40000;
	e3.id=78910;
	e3.name="sarwar";
	e3.salary=500000;
	e1=max;
	if(e2.salary>>max.salary && e2.salary>e3.salary){
		cout<<"the highest salary is:"<<e2.salary<<endl;
	}
else if(e3.salary>>max.salary && e3.salary>e2.salary){
	cout<<"the highest salary is:"<<e3.salary<<endl;
}
else
{
	cout<<"the highest max salary is:"<<max.salary<<endl;
}
return 0;
}
