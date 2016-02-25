<?php
$z[0]=Array("config","",0,34);
$z[0][4]['name']="pagesize";
$z[0][4]['value']="20";
$z[1]=Array("datalist","\r\n    <tr align=\"center\" bgcolor=\"#FFFFFF\" height=\"26\" onMouseMove=\"javascript:this.bgColor='#f4fbf4';\" onMouseOut=\"javascript:this.bgColor='#FFFFFF';\">\r\n        <td><input name=\"id\" type=\"checkbox\" id=\"id\" value=\"{dede:field.id/}\" class=\"np\"></td> \r\n        <td>{dede:field.id /}</td>\r\n        <td>{dede:field.uname/}</td>\r\n        <td>{dede:field.title/}</a></td>\r\n        <td>{dede:field.ip/}</td>\r\n        <td>{dede:field.dtime function='GetDateMk(@me)'/}</td>\r\n        <td>\r\n		<?PHP\r\n		  if(\$fields[ischeck]==1){\r\n		     echo \"<font color='green'>“—…Û∫À</font>\";\r\n		  }else{\r\n		     echo \"<font color='red'><a color='red' href='javascript:Check_id(\".\$fields[id].\");'><span style='color:red;'>Œ¥…Û∫À</span></a></font>\";\r\n		  }\r\n		?>\r\n		</td>\r\n		<td>{dede:field.msg function=\"cn_substr(@me,40)\"/}</td>\r\n        <td><a href=\"javascript:Lookguest({dede:field.id /})\">≤Èø¥</a></td>\r\n        </tr>\r\n		",2172,3103);
$z[2]=Array("pagelist","",3514,3541);
$z[2][4]['listsize']="5";

?>