#include "vanilla.h"
//functions//
//This function reads pdb files-then sends the information to a holder file called holder_for_pdp.txt and then Machine learning algorithms that are yet to be made!//
char *array_that_carries_amino_acids;
int that_number;
int *ptr_that_number;
void read_pdb(void);



typedef struct Amino_Acid
{
    char Full_Amino_Acid_Name[20];
    char Three_letter_Amino_Name[4];
    char Single_letter_Amino_Name[2];
    double Molecular_Weight;//In g/mol
    double N_PKA;
    double C_PKA;
    double R_PKA;
    double PI_Point; //Isoelectric point
    double density;// g/cm^3
    
}Amino_Acid;

Amino_Acid Aminos[22] = {

{"GLYCINE","GLY","G",75.07,2.34,9.69,0,5.97,1.61},
{"ALANINE","ALA","A",89.09,2.34,9.69,0,6.00,1.42},
{"VALINE","VAL","V",117.151,2.32,9.62,0,5.96,1.32},
{"LEUCINE","LEU","L",131.17,2.36,9.60,0,5.98,1.17},
{"ISOLEUCINE","ILE","I",131.17,2.36,9.60,0,6.02,1.29},
{"METHIONINE","MET","M",149.21,2.28,9.21,0,5.74,1.34},
{"PROLINE","PRO","P",115.13,1.99,10.60,0,6.30,1.35},
{"PHENYLALANINE","PHE","F",165.19,1.83,9.13,0,5.48,1.34},
{"TRYPTOPHAN","TRP","W",204.23,2.83,9.39,0,5.89,1.34},
{"ASPARAGINE","ASN","N",132.12,2.02,8.80,0,5.41,1.53},
{"GLUTAMINE","GLN","Q",146.14,2.17,9.13,0,5.65,1.47},
{"SERINE","SER","S",105.09,2.21,9.15,0,5.68,1.60},
{"THREONINE","THR","T",119.119,2.09,9.10,0,5.60,1.3},
{"TYROSINE","TYR","Y",181.19,2.20,9.11,10.07,5.66,1.34},
{"CYSTEINE","CYS","C",121.16,1.96,10.28,8.18,5.07,1.197},//density only estimated
{"ASPARTIC_ACID","ASP","D",133.11,1.88,9.60,3.65,2.77,1.7},
{"GLUTAMIC_ACID","GLU","E",147.13,2.19,9.67,4.25,3.22},
{"ARGININE","ARG","R",2.17,9.04,12.48,10.76,1.2297},//density is roughly estimated
{"HISTIDINE","HIS","H",155.1546,1.82,9.17,6.00,7.59,1.449},
{"LYSINE","LYS","K",146.19,2.18,8.95,10.53,9.74,1.1360},//density is roughly estimated
{"SELENOCYSTEINE","SEC","U",168.065,2.5,9.5,5.2,3.85,-1},//from link in info file
{"PYRROLYSINE","PYL","O",255.313,-1,-1,-1,-1,1.3},//This one needs more research!
};

//function definitions//
//reading pdb files//
void read_pdb(void)

{
    char wort[10],command[15]="rm -f tester2",command2[15]="make tester2",command3[10]="./tester2";
    int k =0;
    system(command);
    system(command2);
    system(command3);
    printf("Your file has been loaded onto holder_for_pdb.txt\n");
}

