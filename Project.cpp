#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

class report
{
	int date,month,year;
	long admNo;
	char res[50]; //reason for coming
	public:
		void inputData();
		void displayData();
		long getAdmno()
		{
			return(admNo);
		}
		void getDate(int &d, int &m, int &y)
		{
			d=date;
			m=month;
			y=year;
		}

}rep;
