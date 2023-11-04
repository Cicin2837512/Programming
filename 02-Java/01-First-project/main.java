import java.awt.Color; 
import javax.swing.JFrame; 
import javax.swing.ImageIcon; 

public class main{
   public static void main(String[] args) {
    
       JFrame frame = new JFrame();
       frame.setSize(420,420);
       frame.setVisible(true);
       frame.setTitle("JFrame title goes here");
       frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

       frame.getContentPane().setBackground(new Color(0x9933ef));

   } 
}
