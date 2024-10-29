abstract class Quadrilateral implements Shape {
    public double numberOfSides() {
        return 4;
    }

    public void shapeName() {
        System.err.println("Quadrilateral");
    }

    public abstract double area();
}
