import java.awt.*;
import java.awt.event.*;

class GUI4 
{
    public static void main(String[] args) 
    {
        MarvellousFrame mobj = new MarvellousFrame("PPA");
    }
}

class MarvellousFrame
{
    public Frame fobj; 

    public MarvellousFrame(String title)
    {
        fobj = new Frame(title);
        fobj.setSize(400,400);
        fobj.setVisible(true);
        fobj.addWindowListener(new MarvellousListner());    //Window vr kahi zale tar MarvellousListner kade ye
    }
}

class MarvellousListner implements WindowListener
{
    public void windowActivated(WindowEvent obj){}
    public void windowDeactivated(WindowEvent obj){}
    public void windowIconified(WindowEvent obj){}
    public void windowDeiconified(WindowEvent obj){}
    public void windowClosed(WindowEvent obj){}
    public void windowOpened(WindowEvent obj){}
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}