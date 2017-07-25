<?php

/**
 * @file
 * EWheel course estimator form functions.
 */

/**
 * Form constructor for the EWheel course estimator.
 *
 * @ingroup forms
 */
function gn2_courses_ewheel() {
  drupal_add_js(drupal_get_path('module', 'gn2_courses') . '/js/ifoldie.js', array('every_page' => FALSE));
  drupal_add_js(drupal_get_path('module', 'gn2_courses') . '/js/jquery-ui-1.10.4.min.js', array('every_page' => FALSE));
  drupal_add_js(drupal_get_path('module', 'gn2_courses') . '/js/jquery.datePicker.js', array('every_page' => FALSE));
  drupal_add_js(drupal_get_path('module', 'gn2_courses') . '/js/newCalc-min.js', array('every_page' => FALSE));
  drupal_add_js('
  jQuery(document).ready(function () {
    resetForms();
  });
  ', 'inline', array('every_page' => FALSE));
  drupal_add_js(drupal_get_path('module', 'gn2_courses') . '/js/ewheel.js', array('every_page' => FALSE));
  drupal_add_js('
  function resetForms() {
    document.getElementById(\'DLIWHEEL\').reset();
  }
  ', array('type' => 'inline', 'scope' => 'footer', 'every_page' => FALSE));
  $form = gn2_courses_ewheel_html();

  $content = '<div id="ewheel-form">' . $form . '</div>';
  $content .= '<div id="bad-ie" style="display: none;">The minimum Internet Explorer version to use this site is IE 10. For best performance, if you have a choice, using Firefox, Chrome, or Safari would offer the best user experience.</div>';

  return $content;
}

/**
 * Return the HTML form.
 */
function gn2_courses_ewheel_html() {
  return <<<EOF
<form id="DLIWHEEL"  name="DLIWHEEL" method="post" action="">
  <p>
    <label for="stucountry">STUDENT'S HOME COUNTRY</label>
    <select name="stucountry" class="wide2"  id="stucountry" onchange="cntryCode()">
      <option value="" text-align:center>SELECT</option>
      <option value="4">AFGHANISTAN</option>
      <option value="3">ALBANIA</option>
      <option value="4">ALGERIA</option>
      <option value="1">ANDORRA</option>
      <option value="3">ANGOLA</option>
      <option value="1">ARGENTINA</option>
      <option value="3">ARMENIA</option>
      <option value="1">AUSTRALIA</option>
      <option value="3">AUSTRIA</option>
      <option value="3">AZERBAIJAN</option>
      <option value="1">BAHAMAS</option>
      <option value="4">BAHRAIN</option>
      <option value="3">BANGLADESH</option>
      <option value="3">BELARUS</option>
      <option value="1">BELGIUM</option>
      <option value="1">BELIZE</option>
      <option value="3">BENIN</option>
      <option value="3">BHUTAN</option>
      <option value="1">BOLIVIA</option>
      <option value="3">BOSNIA HERZEGOVINA</option>
      <option value="3">BOTSWANA</option>
      <option value="1">BRAZIL</option>
      <option value="3">BRUNEI</option>
      <option value="3">BULGARIA</option>
      <option value="3">BURKINA FASO</option>
      <option value="3">BURMA</option>
      <option value="3">BURUNDI</option>
      <option value="3">CAMBODIA</option>
      <option value="3">CAMEROON</option>
      <option value="1">CANADA</option>
      <option value="3">CAPE VERDE</option>
      <option value="3">CENTRAL AFRICAN REPUBLIC</option>
      <option value="4">CHAD</option>
      <option value="1">CHILE</option>
      <option value="4">CHINA</option>
      <option value="1">COLOMBIA</option>
      <option value="4">COMOROS ISLANDS*(CN)</option>
      <option value="3">CONGO (KINSHASA)</option>
      <option value="3">CONGO (BRAZZAVILLE)</option>
      <option value="1">COSTA RICA</option>
      <option value="3">CROATIA</option>
      <option value="3">CYPRUS</option>
      <option value="3">CZECH REPUBLIC</option>
      <option value="1">DENMARK</option>
      <option value="4">DJIBOUTI</option>
      <option value="1">DOMINICAN REPUBLIC</option>
      <option value="3">EAST TIMOR</option>
      <option value="1">ECUADOR</option>
      <option value="4">EGYPT</option>
      <option value="1">EL SALVADOR</option>
      <option value="1">EQUATORIAL GUINEA</option>
      <option value="3">ERITREA</option>
      <option value="3">ESTONIA</option>
      <option value="3">ETHIOPIA</option>
      <option value="1">FIJI</option>
      <option value="3">FINLAND</option>
      <option value="1">FRANCE</option>
      <option value="3">GABON</option>
      <option value="3">GAMBIA</option>
      <option value="3">GEORGIA</option>
      <option value="3">GERMANY</option>
      <option value="3">GHANA</option>
      <option value="3">GREECE</option>
      <option value="1">GUATEMALA</option>
      <option value="3">GUINEA</option>
      <option value="3">GUINEA BISSAU</option>
      <option value="1">GUYANA</option>
      <option value="1">HAITI</option>
      <option value="1">HONDURAS</option>
      <option value="3">HUNGARY</option>
      <option value="1">ICELAND</option>
      <option value="3">INDIA</option>
      <option value="3">INDONESIA</option>
      <option value="4">IRAQ</option>
      <option value="3">ISRAEL</option>
      <option value="1">ITALY</option>
      <option value="3">IVORY COAST</option>
      <option value="1">JAMAICA</option>
      <option value="4">JAPAN</option>
      <option value="4">JORDAN</option>
      <option value="3">KAZAKHSTAN</option>
      <option value="3">KENYA</option>
      <option value="3">KINGDOM OF TONGA</option>
      <option value="1">KIRIBATI</option>
      <option value="4">KOREA*(KOR)</option>
      <option value="3">KOSOVO</option>
      <option value="4">KUWAIT</option>
      <option value="3">KYRGYZSTAN</option>
      <option value="3">LAOS</option>
      <option value="3">LATVIA</option>
      <option value="4">LEBANON</option>
      <option value="3">LESOTHO</option>
      <option value="1">LIBERIA</option>
      <option value="4">LIBYA</option>
      <option value="3">LITHUANIA</option>
      <option value="3">LUXEMBOURG</option>
      <option value="3">MACEDONIA</option>
      <option value="3">MADAGASCAR</option>
      <option value="3">MALAWI</option>
      <option value="3">MALAYSIA*(MY)</option>
      <option value="3">MALDIVE ISLANDS</option>
      <option value="3">MALI</option>
      <option value="3">MALTA</option>
      <option value="4">MAURITANIA</option>
      <option value="4">MAURITANIA</option>
      <option value="1">MAURITIUS</option>
      <option value="1">MEXICO</option>
      <option value="3">MOLDOVA</option>
      <option value="3">MONGOLIA</option>
      <option value="3">MONTENEGRO</option>
      <option value="4">MOROCCO</option>
      <option value="3">MOZAMBIQUE</option>
      <option value="1">NAMIBIA</option>
      <option value="3">NAMO (EU CY UNDER NATO)</option>
      <option value="3">NAURU</option>
      <option value="3">NEPAL</option>
      <option value="1">NETHERLANDS</option>
      <option value="1">NEW ZEALAND</option>
      <option value="3">NICARAGUA</option>
      <option value="3">NIGER</option>
      <option value="3">NIGERIA</option>
      <option value="1">NORWAY</option>
      <option value="4">OMAN</option>
      <option value="3">PAKISTAN</option>
      <option value="1">PANAMA</option>
      <option value="3">PAPUA NEW GUINEA</option>
      <option value="1">PARAGUAY</option>
      <option value="1">PERU</option>
      <option value="3">PHILIPPINES*(RP)</option>
      <option value="3">POLAND</option>
      <option value="1">PORTUGAL</option>
      <option value="4">QATAR</option>
      <option value="3">ROMANIA</option>
      <option value="3">RUSSIA</option>
      <option value="3">RWANDA</option>
      <option value="1">SAN MARINO</option>
      <option value="1">SAO TOME & PRINCIPE</option>
      <option value="4">SAUDI ARABIA</option>
      <option value="4">SAUDI ARABIAN NATIONAL GUARD</option>
      <option value="4">SAUDI ARABIA MOI</option>
      <option value="3">SENEGAL</option>
      <option value="3">SERBIA</option>
      <option value="3">SERBIA & MONTENEGRO</option>
      <option value="1">SEYCHELLES</option>
      <option value="3">SIERRA LEONE</option>
      <option value="4">SINGAPORE</option>
      <option value="3">SLOVAKIA</option>
      <option value="3">SLOVENIA</option>
      <option value="3">SLOVENIA</option>
      <option value="1">SOLOMON ISLANDS</option>
      <option value="4">SOMALIA</option>
      <option value="3">SOUTH SUDAN</option>
      <option value="3">SOUTH AFRICA</option>
      <option value="1">SPAIN</option>
      <option value="3">SRI LANKA</option>
      <option value="1">ST. KITTS-NEVIS</option>
      <option value="4">SUDAN</option>
      <option value="1">SURINAME</option>
      <option value="3">SWAZILAND</option>
      <option value="1">SWEDEN</option>
      <option value="1">SWITZERLAND</option>
      <option value="4">TAIWAN</option>
      <option value="3">TAJIKISTAN</option>
      <option value="3">TANZANIA</option>
      <option value="3">THAILAND</option>
      <option value="3">TOGO</option>
      <option value="1">TRINIDAD & TOBAGO</option>
      <option value="4">TUNISIA</option>
      <option value="3">TURKEY</option>
      <option value="3">TURKMENISTAN</option>
      <option value="3">TUVALU</option>
      <option value="3">UGANDA</option>
      <option value="3">UKRAINE</option>
      <option value="3">UKRAINE-PEACE KEEPING OPERATION</option>
      <option value="1">UNITED STATES</option>
      <option value="4">UNITED ARAB EMIRATES</option>
      <option value="1">UNITED STATES (NOT ECHO)</option>
      <option value="1">URUGUAY</option>
      <option value="3">UZBEKISTAN</option>
      <option value="3">VANUATU</option>
      <option value="1">VENEZUELA</option>
      <option value="3">VIETNAM</option>
      <option value="1">WESTERN SAMOA</option>
      <option value="4">YEMEN</option>
      <option value="3">YUGOSLAVIA</option>
      <option value="3">ZAMBIA</option>
      <option value="3">ZIMBABWE</option>
    </select>
  </p>
  <p>
    <label for="icecl">IN COUNTRY ECL SCORE</label>
    <select name="icecl" class="small4" id="icecl" onchange="cntryECL()">
      <option value="0" selected="selected">---</option>
      <option value="29">29 or less</option>
      <option value="34">30-34</option>
      <option value="39">35-39</option>
      <option value="44">40-44</option>
      <option value="49">45-49</option>
      <option value="54">50-54</option>
      <option value="59">55-59</option>
      <option value="64">60-64</option>
      <option value="69">65-69</option>
      <option value="74">70-74</option>
      <option value="79">75-79</option>
      <option value="84">80-84</option>
      <option value="89">85-89</option>
    </select>
  </p>
  <p>
    <label for="recl">REQUIRED ECL SCORE</label>
    <select name="recl" class="small3" id="recl" onchange="reqECL()">
      <option value="0">---</option>
      <option value="60">60</option>
      <option value="65">65</option>
      <option value="70">70</option>
      <option value="75">75</option>
      <option value="80">80</option>
      <option value="85">85</option>
      <option value="90">90</option>
    </select>
  </p>
  <p>
    <label for="opsavR">OPSAV REQUIRED?</label>
    <select name="opsavR" class="small1" id="opsavR" onchange="reqOPSAV()">
      <option value="0">No</option>
      <option value="16">Yes</option>
    </select>
  </p>
  <p>
    <label for="setR">SET REQUIRED?</label>
    <select name="setR" class="small2" id="setR" onchange="reqSET()">
      <option value="0">No</option>
      <option value="9">Yes</option>
    </select>
  </p>
  <!--
  <label for="wkDisplay">Weeks of Training:</label>
  <input name="wkDisplay" type="text" id="wkDisplay" value="" size="10" maxlength="3" />
  <p>
    <div id="getGradDate" style="display:None;">
      DESIRED GRAD DATE:
      <input name="enddate" type="text" id="enddate" size=15 readonly="readonly">
    </div>
  </p>
  -->
  
  <div id="totalWeeksTxt" align="center">DLIELC COURSE LENGTH ESTIMATOR</div>
  <div id="totalWeeks" align="center"></div>
  <div id="startDateTxt" align="center"></div>
  
  <p>
    <input type="button" visible="true" name="CALCULATE" id="CALCULATE" value="Calculate" onClick="todo()" class="btn" />
  </p>
  
  </form>
EOF;
}