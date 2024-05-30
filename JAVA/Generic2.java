//Generic code 

public class Generic2
{
    public static <T> void Display(T Arr[])
    {
        for(T no : Arr)   //foreach loop 
        {
            System.out.println(no);
        }
    }

    public static void main(String[] args) 
    {
        Integer A[] = {10,20,30,40};
        Float B[] = {50.5f,60.1f,70.6f};
        Double C[] = {50.1234,60.4512,70.645};

        Display(A); 
        Display(B);
        Display(C);
    }
}
