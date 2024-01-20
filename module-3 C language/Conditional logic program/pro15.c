//.Write a C program to determine eligibility for admission to a professional course based on the following criteria
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
// in Chem>=50 and Total in all three subject >=190 or Total in Maths and
// Physics >=140 --------------------------------------Input the marks obtained in
// Physics :65 Input the marks obtained in Chemistry :51 Input the marks
// obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
// 188 Total marks of Maths and Physics : 137 The candidate is not eligible.


#include<stdio.h>
int main()
{
	int maths,chem,phy,total_marks,maths_phy_total;
	
	printf("Enter your maths marks:");
	scanf("%d",&maths);
	printf("Enter your chem marks:");
	scanf("%d",&chem);
	printf("Enter your phy marks:");
	scanf("%d",&phy);
	
	total_marks= maths + chem + phy;
	maths_phy_total = maths + phy;
	
	if((maths>=65 && phy>=55 && chem>=50 && total_marks >= 190)|| 
	 (maths >= 65 && phy >= 55 && maths_phy_total >= 140)) 
	{
		printf("You are eligiable");
	}
	else
	{
		printf("You are not eligiable");
	}
	
	
	return 0;
}

