### Use

Copy println.h and colours.h to your project.

Call `alx::println("<your message>")` to print a simple message.

## Formatting

Place curly brackes in your format string to be replaced by the variadic parameters:

```c++
const std::string world = "world";
alx::println("Hello, {}", world);

```
will result in `Hello, world\n`

You do not have to pass in string objects for it to work either. At the moment the library automatically casts booleans and numbers for printing:

```c++
const bool foo = false;
const bool bar = true;

alx::println("I did {} hit her, it's {} {}!", foo, foo, bar);

```

will result in: `I did not hit her, it's not true!\n`


## Formatting custom objects

It's very straight forward to print your own structures with the library. You simply have to overload the `operator std::string()` to return whatever value in your object that you wish to print out: 

```c++
struct Vec2 {
    int x;
    int y;

    operator std::string() const { return "{" + std::to_string(x) + ", " + std::to_string(y) + "}"
};

...

Vec2 a = {3, 7};
alx::println("{}", a);
```

will result in `{3, 7}` printed out.


### Colours

Your terminal emulator must support TRUECOLOR in order to display the RGB colours.

There are two way to set the foreground colour of the prints:

```c++
alx::println(alx::Colour(255, 255, 255), "{}", ...);
```
will change the colour of the entire line, and
```c++
alx::println("{;255;255;255}", ...);
```
will only change the colour of the printed paramter.

Colours are 8bit RGB.


### Modifiers

`{v}` - will automatically colour the components of a 1 through 4 dimentional vector. (NOTE: Must be serialised with the following format: `{x, y, z, w}`)

More to come...



