//Specific code 

public class Generic1 
{
    public static void Display(Integer Arr[])
    {
        for(int no : Arr)   //foreach loop 
        {
            System.out.println(no);
        }
    }

    public static void main(String[] args) 
    {
        Integer A[] = {10,20,30,40};
        Integer B[] = {50,60,70};

        Display(A); //Direct call 
        Display(B); //Direct call
    }
}
