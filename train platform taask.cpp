#include<iostream>
using namespace std;
int main()
{
	float arrival[6] = {2.0,2.10,3.0,3.20,3.50,5.0};
	float depart[6] = {2.30,3.40,3.20,4.30,4.0,5.20};
	for(int i=1 ; i<6 ; i++)
	{
		float key = depart[i];
		int j = i-1;
		while( j>=0 && key < depart[j])
		{
			depart[j+1] = depart[j];
			depart[j] = key;
			j--;
		}
		depart[j+1] = key;
		
	}
	int platform_in_use = 0;
	int platform_needed = 0;
	
	int i =0;
	int j=0;
	while(i<6 && j<6)
	{
		if(arrival[i]<depart[j])
		{
			platform_in_use++;
			if(platform_in_use > platform_needed)
			{
				platform_needed = platform_in_use;
			}
			i++;
		}
		else
		{
			platform_in_use--;
			j++;
		}
	}
	cout<<"minimum number o platfrom needed = "<<platform_needed;
}
