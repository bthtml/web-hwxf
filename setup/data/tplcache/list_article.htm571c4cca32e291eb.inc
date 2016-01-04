<?php
$z[0]=Array("field","",189,208);
$z[0][4]['name']="title";
$z[1]=Array("global","",209,235);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",276,305);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",345,403);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",713,748);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",934,955);
$z[5][4]['name']="content";
$z[6]=Array("field","",1093,1122);
$z[6][4]['name']="position";
$z[7]=Array("arclist","\r\n<div class=\"media padding-top-20\">\r\n  <div class=\"media-left\">\r\n    [field:array runphp='yes']@me = (empty(@me['litpic']) ? \"\" : \"<a href='{@me['arcurl']}'><img src='{@me['litpic']}'/></a>\"); [/field:array]\r\n  </div>\r\n  <div class=\"media-body\">\r\n  <h4>[field:title/]</h4>\r\n<p>[field:description/]...</p>\r\n<p class=\"pull-right\"><a href=\"[field:arcurl/]\">[阅读详细]</a></p>\r\n  </div>\r\n</div>\r\n",1265,1745);
$z[7][4]['pagesize']="1";
$z[7][4]['flag']="p";
$z[7][4]['imgwidth']="290";
$z[7][4]['imgheight']="140";
$z[8]=Array("list","\r\n<li><a href=\"[field:arcurl/]\"><font class=\"pull-right\">[field:pubdate function=\"GetDateTimeMK(@me)\"/]</font><span class=\"glyphicon glyphicon-play\"> </span>[field:title/]</a></li>\r\n",1785,2004);
$z[8][4]['pagesize']="10";
$z[9]=Array("pagelist","",2060,2138);
$z[9][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[9][4]['listsize']="5";
$z[10]=Array("include","",2192,2229);
$z[10][4]['filename']="footer.htm";

?>