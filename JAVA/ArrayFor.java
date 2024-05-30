import java.util.Scanner;

class ArrayFor
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter The Size of Array : ");
        int iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter The Elements : ");
        
        Arr[0] = sobj.nextInt();
        Arr[1] = sobj.nextInt();
        Arr[2] = sobj.nextInt();
        Arr[3] = sobj.nextInt();

        System.out.println(Arr[0]);
        System.out.println(Arr[1]);
        System.out.println(Arr[2]);
        System.out.println(Arr[3]);

        sobj.close();
    }
}
