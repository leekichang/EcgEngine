#pragma once
#include <map>

#include "MoveX.h"
#include "RuntimeJumpByFunctor.h"
#include "MoveXFunctor.h"

#define REGISTER_FUNC_TYPE function<void(RuntimeAction*, GameObject*, const rapidjson::Value&)>

class RuntimeActionCatalog
{
public:
	static void AddAction(string actionName, RuntimeAction* runtimeAction, GameObject* target, const rapidjson::Value& actionObjectValue);

private:
	//TODO : �̸� - ��� �Լ� �� ���⿡ ����ؼ� �׳� �ٷ� �Լ� �̸��� Ű�� �� �� �ְ� �ٲٱ�
	static std::map<string, REGISTER_FUNC_TYPE> _actionList;
};