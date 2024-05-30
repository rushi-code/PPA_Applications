import java.awt.*;
import java.awt.event.*;

class Calculator2 
{
    public static void main(String[] args) 
    {
        MarvellousCalculator mobj = new MarvellousCalculator(400,400,"Marvellous Calculator");
    }
}

class MarvellousCalculator extends WindowAdapter implements ActionListener
{
    public Frame fobj;
    public Button b1,b2,b3,b4;
    public TextField t1,t2;
    public Label lobj;
    public Integer No1,No2;

    public MarvellousCalculator(int width, int height, String title)
    {
        fobj = new Frame(title);
        fobj.setSize(width,height);

        fobj.addWindowListener(this);

        b1 = new Button("ADD");
        b2 = new Button("SUB");
        b3 = new Button("MULT");
        b4 = new Button("DIV");

        t1 = new TextField();
        t2 = new TextField();

        b1.setBounds(10, 280, 80, 40);
        b2.setBounds(100, 280, 80, 40);
        b3.setBounds(190, 280, 80, 40);
        b4.setBounds(290, 280, 80, 40);

        t1.setBounds(70, 100, 100, 40);
        t2.setBounds(220, 100, 100, 40);

        fobj.add(b1);
        fobj.add(b2);
        fobj.add(b3);
        fobj.add(b4);

        fobj.add(t1);
        fobj.add(t2);

        lobj = new Label("Result : ");
        lobj.setBounds(125,120,200,100);
        fobj.add(lobj);

        // actionPerformed method gets called

        b1.addActionListener(this); 
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);

        fobj.setLayout(null);
        fobj.setVisible(true);
    }

    public void windowClosing(WindowEvent obj)  //Event handler for Frame
    {
        System.exit(0);
    }

    public void actionPerformed(ActionEvent aobj)   //Event Handler for buttons
    {
        try
        {
            No1 = Integer.parseInt(t1.getText());
            No2 = Integer.parseInt(t2.getText());

            //get source method gives from which source event get generated
            if(aobj.getSource() == b1)
            {
                lobj.setText("Result : "+"Addition is "+(No1+No2));
            }
            else if(aobj.getSource() == b2)
            {
                lobj.setText("Result : "+"Subtraction is "+(No1-No2));
            }
            else if(aobj.getSource() == b3)
            {
                lobj.setText("Result : "+"Multiplication is "+(No1*No2));
            }
            else if(aobj.getSource() == b4)
            {
                lobj.setText("Result : "+"Division is "+(No1/No2));
            }
        }
        catch(Exception obj)
        {}
    }
}