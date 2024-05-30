import javax.swing.*;

class SwingDemo 
{
    public static void main(String[] args) 
    {
        MarvellousFrame mobj = new MarvellousFrame("MARVELLOUS");
    }
}

class MarvellousFrame
{
    public MarvellousFrame(String title)
    {
        JFrame obj = new JFrame(title);
        obj.setSize(400,400);
        obj.setVisible(true);
    }
}