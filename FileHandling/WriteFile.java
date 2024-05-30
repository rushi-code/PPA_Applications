import java.io.*;

class WriteFile
{
    public static void main(String[] args) throws Exception
    {
        FileOutputStream fobj = new FileOutputStream("Infosystems");

        String str = "India is my country";

        byte Arr[] = str.getBytes();

        fobj.write(Arr);
        
        fobj.close();
    }
}