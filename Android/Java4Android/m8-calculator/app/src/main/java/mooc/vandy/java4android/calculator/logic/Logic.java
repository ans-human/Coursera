package mooc.vandy.java4android.calculator.logic;

import java.util.HashMap;

import mooc.vandy.java4android.calculator.ui.ActivityInterface;

/**
 * Performs an operation selected by the user.
 */
public class Logic implements LogicInterface {
    /**
     * Reference to the Activity output.
     */
    protected ActivityInterface mOut;
    private static final int ADD = 1;
    private static final int SUBTRACT = 2;
    private static final int MULTIPLY = 3;
    private static final int DIVIDE = 4;

    
    /**
     * Constructor initializes the field.
     */
    public Logic(ActivityInterface out) {
        mOut = out;
        
    }

    

    /**
     * Perform the operation on argumentOne and argumentTwo.
     */
    public void process(int argumentOne, int argumentTwo, int operation) {
        // TODO - Put your code here.
        switch(operation){
            case ADD:
                Add addition = new Add(argumentOne,argumentTwo,mOut); // Create new Add Object
                addition.operate(); // Perform Addition
                break;
            case SUBTRACT:
                Subtract subtract = new Subtract(argumentOne,argumentTwo,mOut); // Create new Subtract Object
                subtract.operate(); // Perform subtraction
                break;
            case MULTIPLY:
                Multiply multiply = new Multiply(argumentOne,argumentTwo,mOut); // Create new Multiply Object
                multiply.operate(); // Perform multiplication
                break;
            case DIVIDE:
                Divide divide = new Divide(argumentOne,argumentTwo,mOut); // Create new Divide Object
                divide.operate(); // Perform Division
                break;
            default:
                mOut.print("Invalid Option");
        }
    }
}
