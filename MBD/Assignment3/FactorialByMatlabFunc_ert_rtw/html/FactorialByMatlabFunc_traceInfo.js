function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "FactorialByMatlabFunc"};
	this.sidHashMap["FactorialByMatlabFunc"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "FactorialByMatlabFunc:2"};
	this.sidHashMap["FactorialByMatlabFunc:2"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "FactorialByMatlabFunc:5"};
	this.sidHashMap["FactorialByMatlabFunc:5"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "FactorialByMatlabFunc:3"};
	this.sidHashMap["FactorialByMatlabFunc:3"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "FactorialByMatlabFunc:4"};
	this.sidHashMap["FactorialByMatlabFunc:4"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/MATLAB Function"] = {sid: "FactorialByMatlabFunc:2"};
	this.sidHashMap["FactorialByMatlabFunc:2"] = {rtwname: "<Root>/MATLAB Function"};
	this.rtwnameHashMap["<Root>/y"] = {sid: "FactorialByMatlabFunc:6"};
	this.sidHashMap["FactorialByMatlabFunc:6"] = {rtwname: "<Root>/y"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "FactorialByMatlabFunc:2:1"};
	this.sidHashMap["FactorialByMatlabFunc:2:1"] = {rtwname: "<S1>:1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
