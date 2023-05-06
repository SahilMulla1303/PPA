import java.net.*;
import java.io.*;

public class Server 
{
    public static void main(String Argg[]) throws Exception 
    {
        System.out.println("Server Application is running...");
        ServerSocket ssobj = new ServerSocket(2100);
        System.out.println("Server is running at port no : 2100");

        Socket s = ssobj.accept();
        System.out.println("Server and Client connection is succesful");

        
        PrintStream ps = new PrintStream(s.getOutputStream());

        BufferedReader br1 = new BufferedReader(new InputStreamReader(s.getInputStream()));

        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Chat messanger started...");

        String str1,str2;
        while((str1 = br1.readLine()) != null)
        {
            System.out.println("Client says :"+str1);
            System.out.println("Enter messege for client :");
            str2 = br2.readLine();
            ps.println(str2);
        }
        System.out.println("Thank you for using Chat Messanger...");
    }  
}
