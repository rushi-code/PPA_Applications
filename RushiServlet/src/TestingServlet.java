import javax.servlet.*;
import javax.servlet.http.*;
import java.io.*;
import java.util.*;

public class TestingServlet extends HttpServlet 
{

    public void doGet(HttpServletRequest request, 
    HttpServletResponse response) throws ServletException, IOException 
    {
        try
        {
            PrintWriter out = response.getWriter();
            out.println("<HTML>");
            out.println("<HEAD>");
            out.println("<TITLE>Marvellous Infosystems</TITLE>");
            out.println("</HEAD>");
            out.println("<BODY>");
            out.println("Educating for better tomorrow...");
            out.println("</BODY>");
            out.println("</HTML>");
            out.close();
        }
        catch(Exception obj)
        {}
    }

}
