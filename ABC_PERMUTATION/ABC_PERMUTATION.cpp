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



char allchars[] = {"123456789"};//DEFGHIJKLMNOPQRSTUVWXYZ"};//abcdefghijklmnopqrstuvwxyz123456789"};


#define THREE 12
#define POOL sizeof(allchars)-1
#define ZERO 0
char *pc(new char[THREE]);
unsigned long long int *pi = new unsigned long long int[THREE];

void assemble(unsigned long long int *pi)
{	
	
	++pi[ZERO];
	
	for(unsigned long long int i = 0;pi[i]==(POOL) && i<THREE;i++)
		{
			
			if(i!= (THREE-1))
			{
				pi[i] = 0;
				++pi[i+1];
			}
		}
		
}





void permutation(unsigned long long int a, unsigned long long int base)
{
	
	memset(pi, 0x00, a*sizeof(unsigned long long int));
	
	unsigned long long int counter2 = 0;
	char base2 = allchars[ZERO];
	unsigned long long int val2 = 0;
	unsigned long long int j = THREE-1;

	while(true)
	{
		for(unsigned long long int i = 0; i<a; i++){
			
			
			
			do{			
					pc[i] = allchars[counter2++];

				}while(val2++ < pi[j]);

		

			j--;
			counter2 = 0;
			val2 = 0;

		}
		static unsigned long long int counter = 0;
		//cout<<counter++<<".  ";
		/*for(unsigned long long int i = 0 ; i<THREE; i++)
		{
			cout<<pc[i];

		}*/
		//cout<<endl;
		assemble(pi);
		j = THREE-1;

		 if (pi[THREE-1] == (POOL))
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







/*  //original

#include "stdafx.h"
#include "iostream"
using namespace std;
#include "windows.h"
#include "Winternl.h"


//#define Capitain(joke)  \
//	joke*joke \
//	joke

#define THREE 16
#define POOL 26
#define ZERO 0
char *pc(new char[THREE]);
int *pi = new int[THREE];

void assemble(int *pi)
{

	++pi[ZERO];
	
	for(int i = 0;pi[i]==(POOL) && i<THREE;i++)
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
	int j = THREE-1;

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
		j = THREE-1;

		 if (pi[THREE-1] == (POOL))
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

*/