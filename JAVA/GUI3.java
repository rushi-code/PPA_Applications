import java.awt.*;

class GUI3
{
    public static void main(String[] args) 
    {
        MarvellousFrame mobj = new MarvellousFrame("PPA");
    }
}

class MarvellousFrame
{
    public Frame fobj;  //Frame class cha reference

    public MarvellousFrame(String title)
    {
        fobj = new Frame(title);
        fobj.setSize(400,400);
        fobj.setVisible(true);
    }
}