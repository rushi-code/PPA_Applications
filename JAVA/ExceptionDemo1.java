import java.util.Scanner;

class ExceptionDemo1 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        int Arr[] = new int[5];
        Arr[0] = 11;
        Arr[1] = 12;
        Arr[2] = 13;
        Arr[3] = 14;
        Arr[4] = 15;

        int Index = 0;

        System.out.println("Enter The Index : ");

        Index = sobj.nextInt();

        System.out.println("Data At the specified index is "+Arr[Index]);
    }
}
