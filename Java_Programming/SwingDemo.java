import javax.swing.*;

class MarvellousFrame
{
    public MarvellousFrame(String title)
    {
        JFrame fobj = new JFrame(title);

        fobj.setSize(500,500);
        fobj.setVisible(true);
    }
}

public class SwingDemo
{
    public static void main(String Arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("PPA");
    }    
}


/*
 AWT        Swing
 Frame      JFrame
 Button     JButton
 TextFild   JTextFild
 */