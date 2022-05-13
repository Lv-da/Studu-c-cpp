#include <bits/stdc++.h>
using namespace std;

class Array{
public:
	void set_value(){
		for(int i=0;i<10;i++){
			cin>>array[i];
		}
	}
	void show_value(){
	 	cout<<"array'"<<this<<"' is:";
		for(int i=0;i<10;i++){
			cout<<array[i]<<" ";
		}
		cout<<endl;
	}
	int get_max(){
		int max=array[0];
		for(int i=1;i<10;i++){
			max=array[i]>max?array[i]:max;
		}
		return max;
	}
	int get_min(){
		int min=array[0];
		for(int i=1;i<10;i++){
			min=array[i]<min?array[i]:min;
		}
		return min;
	}
	void show_max(){
		int max=array[0];
		for(int i=1;i<10;i++){
			max=array[i]>max?array[i]:max;
		}
		cout<<"max:"<<max<<endl;;
	}
	void show_min(){
		int min=array[0];
		for(int i=1;i<10;i++){
			min=array[i]<min?array[i]:min;
		}
		cout<<"min:"<<min<<endl;;
	}
	void show_in_order(){
		multiset<int> order;
		for(int i=0;i<10;i++){
			order.insert(array[i]);
		}
		for(multiset<int>::iterator i=order.begin();i!=order.end();i++){
			cout<<*i<<" ";
		}
		cout<<endl;
	}
private:
	int array[10];
};

int main(){
	Array a;
	a.set_value();
	a.show_value();
	cout<<"get_max is:"<<a.get_max()<<endl;
	cout<<"get_min is:"<<a.get_min()<<endl;
	a.show_max();
	a.show_min();
	a.show_in_order();
	cout<<"Completed"<<endl;
	return 0; 
}
