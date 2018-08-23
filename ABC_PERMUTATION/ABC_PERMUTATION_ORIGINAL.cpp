// ABC_PERMUTATION.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "iostream"
using namespace std;
#include "windows.h"
#include "Winternl.h"


//#define Capitain(joke)  \
//	joke*joke \
//	joke

#define THREE 3
#define ZERO 0
char *pc(new char[THREE]);
int *pi = new int[THREE];

void assemble(int *pi)
{

	++pi[ZERO];
	
	for(int i = 0;pi[i]==(THREE) && i<THREE;i++)				//pi[i]==(THREE-1) doesnt work, so changed it
		{
			
			if(i!= (THREE-1))
			{
				pi[i] = 0;
				++pi[i+1];
			}
		}
		
}





void permutation(int a, int base)
{
	
	memset(pi, 0x00, a*sizeof(int));

	int base2 = base;
	int val2 = 0;
	int j = 2;

	while(true)
	{
		for(int i = 0; i<a; i++){
			
			
			
			do{			
					pc[i] = (char)(base2++);

				}while(val2++ < pi[j]);

		

			j--;
			base2 = base;
			val2 = 0;

		}
		static int counter = 0;
		cout<<counter++<<".  ";
		for(int i = 0 ; i<THREE; i++)
		{
			cout<<pc[i];

		}
		cout<<endl;
		assemble(pi);
		j = 2;

		 if (pi[THREE-1] == (THREE))
			{
				cout<<"why me?";
				break;
			}
		
		
		
	}




	

	delete [] pi;
	delete [] pc;



}

int _tmain(int argc, _TCHAR* argv[])
{
	
	//Capitain(3);

	permutation(THREE, 97);

	return 0;
}

