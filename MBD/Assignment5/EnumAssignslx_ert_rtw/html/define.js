function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:35,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:72,type:"fcn"};
this.def["EnumAssignslx_U"] = {file: "EnumAssignslx_c.html",line:22,type:"var"};
this.def["EnumAssignslx_Y"] = {file: "EnumAssignslx_c.html",line:25,type:"var"};
this.def["EnumAssignslx.c:EnumAssignslx_M_"] = {file: "EnumAssignslx_c.html",line:28,type:"var"};
this.def["EnumAssignslx_M"] = {file: "EnumAssignslx_c.html",line:29,type:"var"};
this.def["EnumAssignslx_step"] = {file: "EnumAssignslx_c.html",line:32,type:"fcn"};
this.def["EnumAssignslx_initialize"] = {file: "EnumAssignslx_c.html",line:61,type:"fcn"};
this.def["EnumAssignslx_terminate"] = {file: "EnumAssignslx_c.html",line:73,type:"fcn"};
this.def["ExtU_EnumAssignslx_T"] = {file: "EnumAssignslx_h.html",line:41,type:"type"};
this.def["ExtY_EnumAssignslx_T"] = {file: "EnumAssignslx_h.html",line:50,type:"type"};
this.def["MYstr"] = {file: "EnumAssignslx_types_h.html",line:29,type:"type"};
this.def["Fault"] = {file: "EnumAssignslx_types_h.html",line:39,type:"type"};
this.def["enum1"] = {file: "EnumAssignslx_types_h.html",line:49,type:"type"};
this.def["RT_MODEL_EnumAssignslx_T"] = {file: "EnumAssignslx_types_h.html",line:54,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:80,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:85,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:90,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:97,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:104,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:111,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:118,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:125,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:132,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:150,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["EnumAssignslx_c.html"] = "../EnumAssignslx.c";
	this.html2Root["EnumAssignslx_c.html"] = "EnumAssignslx_c.html";
	this.html2SrcPath["EnumAssignslx_h.html"] = "../EnumAssignslx.h";
	this.html2Root["EnumAssignslx_h.html"] = "EnumAssignslx_h.html";
	this.html2SrcPath["EnumAssignslx_private_h.html"] = "../EnumAssignslx_private.h";
	this.html2Root["EnumAssignslx_private_h.html"] = "EnumAssignslx_private_h.html";
	this.html2SrcPath["EnumAssignslx_types_h.html"] = "../EnumAssignslx_types.h";
	this.html2Root["EnumAssignslx_types_h.html"] = "EnumAssignslx_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","EnumAssignslx_c.html","EnumAssignslx_h.html","EnumAssignslx_private_h.html","EnumAssignslx_types_h.html","rtwtypes_h.html"];
