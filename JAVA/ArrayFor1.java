import java.util.Scanner;

class ArrayFor1
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Size of Array : ");

        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter The Elements : ");

        int iCnt = 0;
        
        for(iCnt = 0; iCnt<iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        System.out.println("Elements of array are : ");

        for(iCnt = 0; iCnt<iSize; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        sobj.close();
    }
}