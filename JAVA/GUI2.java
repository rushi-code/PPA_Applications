import java.awt.*;

class GUI2
{
    public static void main(String[] args) 
    {
        MarvellousFrame mobj = new MarvellousFrame("PPA");
    }
}

class MarvellousFrame
{
    public MarvellousFrame(String title)
    {
        Frame fobj = new Frame(title);
        fobj.setSize(400,400);
        fobj.setVisible(true);
    }
}