import java.io.*;

class CreateFile
{
    public static void main(String[] args) throws Exception
    {
        File fobj = new File("Infosystems");
        
        if(fobj.createNewFile())
        {   
            System.out.println("File successfully created");
        }
        else
        {
            System.out.println("Unable to create the file");
        }
    }
}