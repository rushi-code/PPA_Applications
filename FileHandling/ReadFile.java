import java.io.*;

class ReadFile
{
    public static void main(String[] args) throws Exception
    {
        FileInputStream fobj = new FileInputStream("Infosystems");
        int i = 0;

        while((i = fobj.read()) != -1)
        {
            System.out.print((char)i);
        }
        fobj.close();
    }
}