package mooc.vandy.java4android.buildings.logic;

/**
 * This is the Building class file.
 */
public class Building {

    // TODO - Put your code here.
    private int mLength;
    private int mWidth;
    private int mLotLength;
    private int mLotWidth;

    // methods
    public Building(int length, int width, int lotLength, int lotWidth){
        setLength(length);
        setWidth(width);
        setLotLength(lotLength);
        setLotWidth(lotWidth);
    }

    public int getLength() {
        return mLength;
    }
    public int getWidth() {
        return mWidth;
    }
    public int getLotLength () {
        return mLotLength;
    }
    public int getLotWidth() {
        return mLotWidth;
    }
    public void setLength (int Length ) {
        mLength = Length;
    }
    public void setWidth ( int width) {
        mWidth = width;
    }
    public void setLotLength (int lotLength) {
        mLotLength = lotLength;
    }
    public void setLotWidth (int lotWidth) {
        mLotWidth = lotWidth;
    }
    public int calcBuildingArea() {
        return getLength()*getWidth();
    }
    public int calcLotArea () {
        return getLotLength()*getLotWidth();
    }
    public String toString() {
        return "a "+getLength()+"x"+getWidth()+ " building";
    }
}
