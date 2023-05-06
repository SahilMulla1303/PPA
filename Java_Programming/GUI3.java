import java.awt.*;

class MarvellousFrame
{
    public Frame fobj;
    
    public MarvellousFrame(String title)
    {
        fobj = new Frame(title);

        fobj.setSize(500,500);
        fobj.setVisible(true);
    }
}

public class GUI3
{
    public static void main(String Arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("PPA");
    }    
}
