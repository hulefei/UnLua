require("LuaPanda").start("127.0.0.1", 8818)
local Screen = require "Tutorials.Screen"

local M = UnLua.Class()

print("=====================================")
print( UE.UObject)
print("=====================================")

-- 创建一个 UMyObject 实例
-- local LuaCallTest1 = UE.UTestBlueprintFunctionLibrary.LuaCallTest1
-- LuaCallTest1()

function M:call()
    local MyObj = NewObject(UE.UTestLuaObject)
    MyObj:Init()
    MyObj.OnMyEvent:Add(MyObj, function()
        print("Lua CallBack Success")
    end)
    if MyObj then
        MyObj:TestFunction()  -- 调用 C++ 方法
    end
end

-- 所有绑定到Lua的对象初始化时都会调用Initialize的实例方法
function M:Initialize()
    local msg = "Hello, World!"
    print(msg)
    Screen.Print(msg, UE.FLinearColor(1, 1, 1, 1), 2)
    self.call()
end

return M