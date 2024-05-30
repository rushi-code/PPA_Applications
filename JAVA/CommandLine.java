class CommandLine
{
    public static void main(String[] args) 
    {
        System.out.println("Demonstration of command line");

        int No1 = Integer.parseInt(args[0]);
        int No2 = Integer.parseInt(args[1]);

        int Ans = No1 + No2;

        System.out.println("Number of command line arguments : "+args.length);

        System.out.println("Addition is "+Ans);

    }
}