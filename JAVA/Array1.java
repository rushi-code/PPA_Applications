class Array1 
{
    public static void main(String[] args) 
    {
        //static way
        int Arr1[] = {10,20};   //member initialization list

        //dynamic way
        int Arr2[] = new int[3];    //member by member initialization

        Arr2[0] = 10;
        Arr2[1] = 20;
        Arr2[2] = 30;

        System.out.println("Array 1 length is "+Arr1.length);

        System.out.println("Array 2 length is "+Arr2.length);
    }
}
