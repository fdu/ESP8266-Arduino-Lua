#include <LuaWrapper.h>

LuaWrapper lua;

static int myFunction(lua_State *lua_state) {
  Serial.println("Hi from my C function");
}

void setup() {
  Serial.begin(115200);
  lua.Lua_register("myFunction", (const lua_CFunction) &myFunction);
  String script = String("myFunction()");
  Serial.println(lua.Lua_dostring(&script));
}

void loop() {

}
