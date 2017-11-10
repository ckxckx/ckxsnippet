# -*- coding: utf-8 -*-
from lxml import etree
html='''
<!DOCTYPE html>
<html lang="zh-cn">
<head>
  <meta charset="utf-8">
  <title>搜索： '.buaa.edu.cn' - ZoomEye</title>
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1,user-scalable=no">
  <meta name="keyword" content="cyberspace,device,zoomeye,fingerprint,security,search engine,ipv4,nmap,scan,web">
  <link rel="shortcut icon" href="/static/images/favicon.ico" />
  <link rel="search" type="application/opensearchdescription+xml" href="/static/opensearch.xml" title="ZoomEye" />

  <!--[if lte IE 8]><meta http-equiv="refresh" content="0;url=/ie" /><![endif]-->

  <link href="/static/css/search.dist.v2_7.css" rel="stylesheet" type="text/css" media="screen" />
  <link href="/static/css/spinner.dist.v2_4.css" rel="stylesheet" type="text/css" media="screen" />




  <link href="/static/css/v3_to_v4_migrate.dist.v1_0_8.css" rel="stylesheet" type="text/css" media="screen" />
</head>

<body class="results" data-manual-ajax-url="/help/manual_ajax">





<div class="site-search hidden-xs hidden-sm">
  <a href="https://www.zoomeye.org/"><img src="/static/v4/images/zoomeye-logo@188x36.png" alt="ZoomEye"/></a>

  <form class="search-form j-search-form" role="search" action="/search" method="get">
    <div class="form-group">
      <div class="btn-group">
        <button type="button" class="btn dropdown-toggle" data-toggle="dropdown" aria-haspopup="true"
                aria-expanded="false">
          <span class="current">主机</span> <span class="caret"></span></button>
        <ul class="dropdown-menu">
          <li data-type="web"><a href="#">网站</a></li>
          <li data-type="host"><a href="#">主机</a></li>
        </ul>
      </div>
      <input type="hidden" name="t" value="host"/>
      <input type="text" class="form-control" placeholder="Search" name="q">
      <i class="glyphicon glyphicon-search"></i>
    </div>
  </form>
  <div class="contact-group">
      <a href="mailto:team@zoomeye.org" class="contact-item"><i class="fa fa-envelope"></i></a>
      <a target="_blank" href="https://twitter.com/zoomeye_team" class="contact-item"><i class="fa fa-twitter"></i></a>
      <a target="_blank" href="http://weibo.com/u/3987998963" class="contact-item"><i class="fa fa-weibo"></i></a>
      <a target="_blank" href="http://shang.qq.com/wpa/qunwpa?idkey=521e74d22253ada7a8cba9cb938e5c78c37ee61544b020ee19eac91ac921fd42" class="contact-item"><i class="fa fa-qq"></i></a>
  </div>
</div>

<header class="site-header">
  <nav class="navbar site-navbar mini">
    <div class="container-fluid">

        <!-- Brand and toggle get grouped for better mobile display -->
        <div class="navbar-header">
            <button type="button" class="navbar-toggle collapsed" data-toggle="collapse"
                    data-target="#j-site-navbar-collapse" aria-expanded="false">
                <span class="sr-only">Toggle navigation</span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
                <span class="icon-bar"></span>
            </button>
            <a class="navbar-brand visible-xs visible-sm" href="/"><img src="/static/v4/images/zoomeye.svg" alt="ZoomEye" style="width: 114px;height: 24px;"/></a>
        </div>
      <!-- Collect the nav links, forms, and other content for toggling -->
      <div class="collapse navbar-collapse" id="j-site-navbar-collapse">

        <ul class="nav navbar-nav">
          <li data-nav="search"><a href="https://www.zoomeye.org/">搜索 <span class="sr-only">(current)</span></a></li>
          <li data-nav="vision"><a href="/vision/">视角</a></li>
          <li data-nav="pirate"><a href="/pirate">海盗榜</a></li>
          <li data-nav="api"><a href="/api">API</a></li>


          <li data-nav="more"><a href="/more">更多</a></li>
        </ul>

          <ul class="nav navbar-nav navbar-right">

              <li class="dropdown">
                  <a href="#" class="dropdown-toggle" data-toggle="dropdown">Calvinrd</a>
                  <ul class="dropdown-menu" role="menu">
                      <li role="presentation" class="dropdown-header">Calvinrd</li>
                      <li><a href="https://sso.telnet404.com/accounts/modify_password/">修改密码</a></li>
                      <li><a href="/accounts/my/profile/">个人资料</a></li>
                      <li><a href="/accounts/logout/?next=/search%3Fq%3D.buaa.edu.cn%26p%3D3%26t%3Dhost">退出登录</a></li>
                  </ul>
              </li>

          </ul>
      </div>
      <!-- /.navbar-collapse -->
    </div>
    <!-- /.container-fluid -->
  </nav>
</header>







<section class="mini-search affix-top" data-spy="affix" data-offset-top="43">
  <div class="container-fluid">
    <div class="row">
      <div class="col-xs-12">
        <a href="/" class="hidden-xs pull-left">

          <img class="logo-sm" src="/static/images/zoomeye.svg"
               data-retina="/static/images/zoomeye.png"
               data-fallback="/static/images/zoomeye.png">

        </a>

        <div class="bar">
          <form action="/search" method="get" class="ultra-form">
            <input type="text" autocomplete="off" name="q" value=".buaa.edu.cn"
                   class="flex-text" role="combobox"><button class="btn btn-info default" type="submit">探索一下</button>
          </form>
        </div>

      </div>
    </div>

    <div class="row">
      <div class="col-xs-12">
        <ul class="nav nav-tabs search-tab" role="navigation">
          <li class="active">
            <a href="#">搜索结果</a>
          </li>
          <li><a href="/vision/map/.buaa.edu.cn">全球视角</a></li>
        </ul>
      </div>

    </div>

  </div>


</section>

  <section class="search-results">
    <div class="container-fluid">
      <div class="row">
        <div class="col-lg-12">

          <div class="aggregation">

            <h3 class="filter-title-result-type hidden-xs">搜索类型</h3>
            <ul class="bar-filter filter-result-type clearfix">
                <li class="clearfix active">
                  <a href="/search?q=.buaa.edu.cn&t=host&f=fliter">公网设备</a>
                  <i class="glyphicon glyphicon-triangle-left"></i>
                </li>
                <li class="clearfix">
                  <a href="/search?q=.buaa.edu.cn&t=web&f=fliter">Web 服务</a>
                  <i class="glyphicon glyphicon-triangle-left"></i>
                </li>
            </ul>

            <div class="hidden-print hidden-xs">
            <hr>


                <h3 class="filter-title-port">port</h3>
                <ul class="bar-filter filter-port">

                    <li class="clearfix">
                      <span data-count="23"

                          > 23

                      </span>
                      <a

                          href="/search?q=.buaa.edu.cn%20port:80&t=host">

                        80
                      </a>


                    </li>

                    <li class="clearfix">
                      <span data-count="12"

                          > 12

                      </span>
                      <a

                          href="/search?q=.buaa.edu.cn%20port:25&t=host">

                        25
                      </a>


                    </li>

                    <li class="clearfix">
                      <span data-count="5"

                          > 5

                      </span>
                      <a

                          href="/search?q=.buaa.edu.cn%20port:443&t=host">

                        443
                      </a>


                    </li>

                    <li class="clearfix">
                      <span data-count="4"

                          > 4

                      </span>
                      <a

                          href="/search?q=.buaa.edu.cn%20port:8080&t=host">

                        8080
                      </a>


                    </li>

                </ul>



                <h3 class="filter-title-service">service</h3>
                <ul class="bar-filter filter-service">

                    <li class="clearfix">
                      <span data-count="32"

                          > 32

                      </span>
                      <a

                          href="/search?q=.buaa.edu.cn%20service:http&t=host">

                        http
                      </a>


                    </li>

                    <li class="clearfix">
                      <span data-count="12"

                          > 12

                      </span>
                      <a

                          href="#">

                        Unknown
                      </a>


                    </li>

                </ul>



                <h3 class="filter-title-app">app</h3>
                <ul class="bar-filter filter-app">

                    <li class="clearfix">
                      <span data-count="12"

                          class="right-for-menu-holder">
                          12
                          <i class="expand"></i>

                      </span>
                      <a

                          href="/search?q=.buaa.edu.cn%20app:&quot;Apache Tomcat/Coyote JSP engine&quot;&t=host">

                        Apache Tomcat/Coyote JSP engine
                      </a>

                        <div class="clearfix"></div>
                        <ul class="clearfix version">

                            <li class="clearfix"><span data-count="12">12</span><a>1.1</a></li>

                        </ul>


                    </li>

                    <li class="clearfix">
                      <span data-count="8"

                          class="right-for-menu-holder">
                          8
                          <i class="expand"></i>

                      </span>
                      <a

                          href="#">

                        Unknown
                      </a>

                        <div class="clearfix"></div>
                        <ul class="clearfix version">

                            <li class="clearfix"><span data-count="8">8</span><a>Unknown</a></li>

                        </ul>


                    </li>

                    <li class="clearfix">
                      <span data-count="8"

                          class="right-for-menu-holder">
                          8
                          <i class="expand"></i>

                      </span>
                      <a

                          href="/search?q=.buaa.edu.cn%20app:nginx&t=host">

                        nginx
                      </a>

                        <div class="clearfix"></div>
                        <ul class="clearfix version">

                            <li class="clearfix"><span data-count="4">4</span><a>1.2.3.6</a></li>

                            <li class="clearfix"><span data-count="2">2</span><a>Unknown</a></li>

                            <li class="clearfix"><span data-count="2">2</span><a>1.2.4</a></li>

                        </ul>


                    </li>

                    <li class="clearfix">
                      <span data-count="2"

                          class="right-for-menu-holder">
                          2
                          <i class="expand"></i>

                      </span>
                      <a

                          href="/search?q=.buaa.edu.cn%20app:&quot;Apache httpd&quot;&t=host">

                        Apache httpd
                      </a>

                        <div class="clearfix"></div>
                        <ul class="clearfix version">

                            <li class="clearfix"><span data-count="2">2</span><a>2.4.7</a></li>

                        </ul>


                    </li>

                </ul>



                <h3 class="filter-title-device">device</h3>
                <ul class="bar-filter filter-device">

                    <li class="clearfix">
                      <span data-count="43"

                          > 43

                      </span>
                      <a

                          href="#">

                        Unknown
                      </a>


                    </li>

                </ul>



                <h3 class="filter-title-os">os</h3>
                <ul class="bar-filter filter-os">

                    <li class="clearfix">
                      <span data-count="43"

                          > 43

                      </span>
                      <a

                          href="#">

                        Unknown
                      </a>


                    </li>

                </ul>



                <h3 class="filter-title-country">country</h3>
                <ul class="bar-filter filter-country">

                    <li class="clearfix">
                      <span data-count="42"

                          class="right-for-menu-holder">
                          42
                          <i class="expand"></i>

                      </span>
                      <a

                          href="/search?q=.buaa.edu.cn%20country:China&t=host">

                        China
                      </a>


                        <div class="clearfix"></div>
                        <ul class="clearfix">

                            <li class="clearfix"><span data-count="30">30</span><a data-count="30">Beijing</a></li>

                            <li class="clearfix"><span data-count="10">10</span><a data-count="10">Shanghai</a></li>

                        </ul>

                    </li>

                    <li class="clearfix">
                      <span data-count="2"

                          class="right-for-menu-holder">
                          2
                          <i class="expand"></i>

                      </span>
                      <a

                          href="/search?q=.buaa.edu.cn%20country:Japan&t=host">

                        Japan
                      </a>


                        <div class="clearfix"></div>
                        <ul class="clearfix">

                            <li class="clearfix"><span data-count="2">2</span><a data-count="2">Heiwajima</a></li>

                        </ul>

                    </li>

                </ul>



                <h3 class="filter-title-city">city</h3>
                <ul class="bar-filter filter-city">

                    <li class="clearfix">
                      <span data-count="30"

                          > 30

                      </span>
                      <a

                          href="/search?q=.buaa.edu.cn%20city:Beijing&t=host">

                        Beijing
                      </a>


                    </li>

                    <li class="clearfix">
                      <span data-count="10"

                          > 10

                      </span>
                      <a

                          href="/search?q=.buaa.edu.cn%20city:Shanghai&t=host">

                        Shanghai
                      </a>


                    </li>

                    <li class="clearfix">
                      <span data-count="2"

                          > 2

                      </span>
                      <a

                          href="/search?q=.buaa.edu.cn%20city:Heiwajima&t=host">

                        Heiwajima
                      </a>


                    </li>

                </ul>




            </div>

          </div>

          <section class="section-related-vul hidden-xs hidden-sm affix-top"  data-spy="affix" data-offset-top="43" style="display: none;">
            <h5><div style="margin-bottom: 10px;">在 &nbsp;&nbsp; <a href="https://www.seebug.org"><img src="/static/v4/images/ksz-seebug.png" alt=""/></a></div>
              相关约 <span class="count"></span> 个漏洞
            <a class="more" href="https://www.seebug.org" target="_blank">查看全部 &gt;</a>
            </h5>
            <ul></ul>

            <div id="j-section-vul-switch" class="switch ">
              <!--相关搜索结果-->
              <i class="fa fa-chevron-right"></i><i class="fa fa-chevron-left"></i></div>
          </section>

          <div class="result-list" style="min-height: 800px;">

              <div class="result-summary">
                找到约 <strong>44</strong> 条结果, <strong>16</strong>  个主机
                (<strong>0.095</strong> 秒)。
              </div>







<ul class="result device">



    <li>
      <h3><a class="ip" href="/search?q=ip:219.239.227.26">219.239.227.26</a>
        <a class="original hint--bottom" target="_blank" href="#"
           data-hint="在新窗口打开">
          <sup><i class="iconfont icon-new-window"></i></sup></a></h3>

      <hr>

      <article class="port">

        <ul class="tags">









        </ul>

        <div class="hostname"></div>


          <address>
            <a class="country" href="/search?q=country:&quot;China&quot;">
              <span class="flag flag-cn"></span>
              China
            </a>
            <a class="city" href="/search?q=city:&quot;Beijing&quot;">
              Beijing</a>
          </address>


        <div class="timestamp"><i class="iconfont icon-time"></i>
          <time datetime="2015-10-17T07:36:49">十月 17, 2015</time>
        </div>

      </article>

      <section class="banner">
        <header>
          <i><a href="/search?q=port:25&t=host">
            25</a></i>

        </header>



                <pre>220 <em>buaa.edu.cn</em> Anti-spam GT for Coremail System (buaa[20140724])
250-mail
250-PIPELINING
250-AUTH LOGIN PLAIN
250-AUTH=LOGIN PLAIN
250-coremail 1Uxr2xKj7kG0xkI17xGrUDI0s8FY2U3Uj8Cz28x1UUUUU7Ic2I0Y2Ur-6BmtUCa0xDrUUUUj
250-STARTTLS
250 8BITMIME
220 Ready to start TLS

</pre>


          </p>


      </section>

    </li>



    <li>
      <h3><a class="ip" href="/search?q=ip:202.112.128.66">202.112.128.66</a>
        <a class="original hint--bottom" target="_blank" href="#"
           data-hint="在新窗口打开">
          <sup><i class="iconfont icon-new-window"></i></sup></a></h3>

      <hr>

      <article class="port">

        <ul class="tags">









        </ul>

        <div class="hostname"></div>


          <address>
            <a class="country" href="/search?q=country:&quot;China&quot;">
              <span class="flag flag-cn"></span>
              China
            </a>
            <a class="city" href="/search?q=city:&quot;Beijing&quot;">
              Beijing</a>
          </address>


        <div class="timestamp"><i class="iconfont icon-time"></i>
          <time datetime="2015-10-17T07:21:08">十月 17, 2015</time>
        </div>

      </article>

      <section class="banner">
        <header>
          <i><a href="/search?q=port:25&t=host">
            25</a></i>

        </header>



                <pre>220 <em>buaa.edu.cn</em> Anti-spam GT for Coremail System (buaa[20140724])
250-mail
250-PIPELINING
250-AUTH LOGIN PLAIN
250-AUTH=LOGIN PLAIN
250-coremail 1Uxr2xKj7kG0xkI17xGrUDI0s8FY2U3Uj8Cz28x1UUUUU7Ic2I0Y2UFgyAAhUCa0xDrUUUUj
250-STARTTLS
250 8BITMIME
220 Ready to start TLS

</pre>


          </p>


      </section>

    </li>



    <li>
      <h3><a class="ip" href="/search?q=ip:219.239.227.27">219.239.227.27</a>
        <a class="original hint--bottom" target="_blank" href="#"
           data-hint="在新窗口打开">
          <sup><i class="iconfont icon-new-window"></i></sup></a></h3>

      <hr>

      <article class="port">

        <ul class="tags">









        </ul>

        <div class="hostname"></div>


          <address>
            <a class="country" href="/search?q=country:&quot;China&quot;">
              <span class="flag flag-cn"></span>
              China
            </a>
            <a class="city" href="/search?q=city:&quot;Beijing&quot;">
              Beijing</a>
          </address>


        <div class="timestamp"><i class="iconfont icon-time"></i>
          <time datetime="2015-10-17T04:29:48">十月 17, 2015</time>
        </div>

      </article>

      <section class="banner">
        <header>
          <i><a href="/search?q=port:25&t=host">
            25</a></i>

        </header>



                <pre>220 <em>buaa.edu.cn</em> Anti-spam GT for Coremail System (buaa[20140724])
250-mail
250-PIPELINING
250-AUTH LOGIN PLAIN
250-AUTH=LOGIN PLAIN
250-coremail 1Uxr2xKj7kG0xkI17xGrUDI0s8FY2U3Uj8Cz28x1UUUUU7Ic2I0Y2Ur52vltUCa0xDrUUUUj
250-STARTTLS
250 8BITMIME
220 Ready to start TLS

</pre>


          </p>


      </section>

    </li>



    <li>
      <h3><a class="ip" href="/search?q=ip:219.239.227.27">219.239.227.27</a>
        <a class="original hint--bottom" target="_blank" href="#"
           data-hint="在新窗口打开">
          <sup><i class="iconfont icon-new-window"></i></sup></a></h3>

      <hr>

      <article class="port">

        <ul class="tags">


            <li class="app">

                <a href="/search?q=app:&quot;Apache Tomcat/Coyote JSP engine&quot;%20ver:&quot;1.1&quot;&t=host">
                  Apache Tomcat/Coyote JSP engine:1.1</a>

            </li>








        </ul>

        <div class="hostname"></div>


          <address>
            <a class="country" href="/search?q=country:&quot;China&quot;">
              <span class="flag flag-cn"></span>
              China
            </a>
            <a class="city" href="/search?q=city:&quot;Beijing&quot;">
              Beijing</a>
          </address>


        <div class="timestamp"><i class="iconfont icon-time"></i>
          <time datetime="2015-07-23T20:54:34">七月 23, 2015</time>
        </div>

      </article>

      <section class="banner">
        <header>
          <i><a href="/search?q=port:80&t=host">
            80</a></i>

            <s><a href="/search?q=service:&quot;http&quot;&t=host">
              http</a></s>

        </header>



                <pre>HTTP&#x2F;1.1 200 OK
Server: Apache-Coyote&#x2F;1.1
Pragma: No-cache
Cache-Control: no-cache
Expires: Thu, 01 Jan 1970 00:00:00 GMT
Content-Type: text&#x2F;html;charset=GBK
Content-Language: zh-CN
Date: Thu, 23 Jul 2015 12:50:48 GMT
Connection: close

&lt;!DOCTYPE html PUBLIC &quot;-&#x2F;&#x2F;W3C&#x2F;&#x2F;DTD XHTML 1.0 Transitional&#x2F;&#x2F;EN&quot;
     &quot;http:&#x2F;&#x2F;www.w3.org&#x2F;TR&#x2F;xhtml1&#x2F;DTD&#x2F;xhtml1-transitional.dtd&quot;&gt;
&lt;html xmlns=&quot;http:&#x2F;&#x2F;www.w3.org&#x2F;1999&#x2F;xhtml&quot;&gt;
&lt;head&gt;
&lt;title&gt;北京航空航天大学&lt;&#x2F;title&gt;
&lt;base href=&quot;http:&#x2F;&#x2F;localhost&#x2F;coremail&#x2F;cmcu_var&#x2F;index_cmxt30N1.jsp&quot; &#x2F;&gt;
&lt;link href=&quot;index_cmxt30N1&#x2F;login.css&quot; rel=&quot;stylesheet&quot; type=&quot;text&#x2F;css&quot; charset=&quot;iso-8859-1&quot; &#x2F;&gt;




&lt;script type=&quot;text&#x2F;javascript&quot; src=&quot;..&#x2F;common&#x2F;js&#x2F;jquery.js&quot;&gt;&lt;&#x2F;script&gt;
&lt;script type=&quot;text&#x2F;javascript&quot; src=&quot;index_cmxt30N1&#x2F;login.js&quot; charset=&quot;iso-8859-1&quot;&gt;&lt;&#x2F;script&gt;
&lt;script type=&quot;text&#x2F;javascript&quot;&gt;
    var markme_msg = &quot;请按 Ctrl-D 收藏本页&quot;;
&lt;&#x2F;script&gt;


&lt;&#x2F;head&gt;

&lt;body&gt;
    &lt;div class=&quot;Head&quot; id=&quot;head&quot;&gt;
        &lt;div class=&quot;logo&quot;&gt;
            &lt;a href=&quot;http:&#x2F;&#x2F;www.buaa.edu.cn&quot; target=&quot;_blank&quot;&gt;
              &lt;img alt=&quot;北京航空航天大学邮件系统&quot; style=&quot;border:0 none;&quot; src=&quot;index_cmxt30N1&#x2F;logo.gif&quot; &#x2F;&gt;
            &lt;&#x2F;a&gt;
        &lt;&#x2F;div&gt;
	        &lt;div class=&quot;Links&quot; id=&quot;links&quot;&gt;
	             &lt;a target=&quot;_blank&quot;  href=&quot;http:&#x2F;&#x2F;oldmail.buaa.edu.cn&quot;&gt;旧邮件系统入口&lt;&#x2F;a&gt; |





	            &lt;span id=&quot;localeSwitch&quot;&gt;&lt;a href=&quot;javascript:setCookie(&#x27;locale&#x27;,&#x27;en_US&#x27;); window.location.reload();&quot;&gt;English Version&lt;&#x2F;a&gt; |&amp;nbsp;&lt;&#x2F;span&gt;

	            &lt;span id=&quot;helpIndex&quot;&gt;&lt;a target=&quot;_blank&quot; href=&quot;&#x2F;coremail&#x2F;help&#x2F;index_zh_CN.jsp&quot;&gt;帮助&lt;&#x2F;a&gt;&lt;&#x2F;span&gt;
	        &lt;&#x2F;div&gt;
    &lt;&#x2F;div&gt;

    &lt;div class=&quot;mainContainer&quot; id=&quot;mainContainer&quot; onclick=&quot;submitLinkForm();&quot;&gt;
        &lt;img src=&quot;index_cmxt30N1&#x2F;bg1.jpg&quot; id=&quot;mainBgImg&quot;&gt;
        &lt;div class=&quot;mainBgDesc&quot; id=&quot;mainBgDesc&quot;&gt;
            &lt;a href=&quot;http:&#x2F;&#x2F;www.buaa.edu.cn&#x2F;zt&#x2F;byzt&#x2F;83971.htm&quot; target=&quot;_blank&quot;&gt;&lt;&#x2F;a&gt;
        &lt;&#x2F;div&gt;
        &lt;form id=&quot;linkForm&quot; action=&quot;#&quot; style=&quot;display: &quot;&quot;;&quot; target=&quot;_blank&quot;&gt;&lt;&#x2F;form&gt;
    &lt;&#x2F;div&gt;

    &lt;div class=&quot;footer&quot; id=&quot;footer&quot;&gt;
        &lt;div class= &quot;copyright&quot;&gt;
            Copyright 2014-2015 北京航空航天大学版权所有 联系我们：&lt;a href=&quot;https:&#x2F;&#x2F;mail.buaa.edu.cn&quot;&gt;010-82317005&lt;&#x2F;a&gt; Email: &lt;a href=&quot;mailto:support@buaa.edu.cn&quot;&gt;support@<em>buaa.edu.cn&lt;&#x2F;a&gt;</em>
        &lt;&#x2F;div&gt;
    &lt;&#x2F;div&gt;












        &lt;div class=&quot;select_options localePanel&quot;&gt;
            &lt;ul&gt;





                    &lt;a href=&quot;javascript:void(0);&quot; onclick=&quot;changeLocale(&#x27;zh_CN&#x27;, &#x27;简体中文&#x27;); return false;&quot;&gt;
                        &lt;li&gt;
                            &lt;span&gt;简体中文&lt;&#x2F;span&gt;
                        &lt;&#x2F;li&gt;
                    &lt;&#x2F;a&gt;




</pre>


          </p>


      </section>

    </li>



    <li>
      <h3><a class="ip" href="/search?q=ip:108.61.201.10">108.61.201.10</a>
        <a class="original hint--bottom" target="_blank" href="#"
           data-hint="在新窗口打开">
          <sup><i class="iconfont icon-new-window"></i></sup></a></h3>

      <hr>

      <article class="port">

        <ul class="tags">


            <li class="app">

                <a href="/search?q=app:&quot;Apache httpd&quot;%20ver:&quot;2.4.7&quot;&t=host">
                  Apache httpd:2.4.7</a>

            </li>







            <li class="extra"><a
                href="/search?q=&quot;%28Ubuntu%29&quot;&t=host">(Ubuntu)</a>
            </li>


        </ul>

        <div class="hostname"></div>


          <address>
            <a class="country" href="/search?q=country:&quot;Japan&quot;">
              <span class="flag flag-jp"></span>
              Japan
            </a>
            <a class="city" href="/search?q=city:&quot;Heiwajima&quot;">
              Heiwajima</a>
          </address>


        <div class="timestamp"><i class="iconfont icon-time"></i>
          <time datetime="2015-07-23T20:46:07">七月 23, 2015</time>
        </div>

      </article>

      <section class="banner">
        <header>
          <i><a href="/search?q=port:80&t=host">
            80</a></i>

            <s><a href="/search?q=service:&quot;http&quot;&t=host">
              http</a></s>

        </header>



                <pre>HTTP&#x2F;1.1 200 OK
Date: Thu, 23 Jul 2015 12:44:27 GMT
Server: Apache&#x2F;2.4.7 (Ubuntu)
Last-Modified: Thu, 07 May 2015 05:59:35 GMT
ETag: &quot;2f46-515779dba4e00&quot;
Accept-Ranges: bytes
Content-Length: 12102
Vary: Accept-Encoding
Connection: close
Content-Type: text&#x2F;html

&lt;!DOCTYPE html&gt;
&lt;html&gt;
&lt;head&gt;
&lt;title&gt;Chenqi MOU&#x27;s Homepage&lt;&#x2F;title&gt;

&lt;meta name=&quot;viewport&quot; content=&quot;width=device-width&quot;&#x2F;&gt;
&lt;meta name=&quot;description&quot; content=&quot;The Curriculum Vitae of Joe Bloggs.&quot;&#x2F;&gt;
&lt;meta charset=&quot;UTF-8&quot;&gt;

&lt;link type=&quot;text&#x2F;css&quot; rel=&quot;stylesheet&quot; href=&quot;style.css&quot;&gt;
&lt;!--&lt;link href=&#x27;http:&#x2F;&#x2F;fonts.googleapis.com&#x2F;css?family=Rokkitt:400,700|Lato:400,300&#x27; rel=&#x27;stylesheet&#x27; type=&#x27;text&#x2F;css&#x27;&gt;--&gt;

&lt;!--[if lt IE 9]&gt;
&lt;script src=&quot;&#x2F;&#x2F;html5shiv.googlecode.com&#x2F;svn&#x2F;trunk&#x2F;html5.js&quot;&gt;&lt;&#x2F;script&gt;
&lt;![endif]--&gt;
&lt;&#x2F;head&gt;
&lt;body id=&quot;top&quot;&gt;
&lt;div id=&quot;cv&quot; class=&quot;instaFade&quot;&gt;
	&lt;div class=&quot;mainDetails&quot;&gt;
		&lt;div id=&quot;headshot&quot;&gt;
			&lt;img src=&quot;.&#x2F;files&#x2F;me.jpg&quot;&#x2F;&gt;
		&lt;&#x2F;div&gt;

		&lt;div id=&quot;name&quot;&gt;
			&lt;h1 class&gt;Chenqi Mou&lt;&#x2F;h1&gt;
			&lt;h2 class&gt;Assistant Professor&lt;&#x2F;h2&gt;
			&lt;h2 class&gt;School of Mathematics and Systems Science&lt;&#x2F;a&gt;&lt;&#x2F;h2&gt;
			&lt;h2 class&gt;Beihang University&lt;&#x2F;a&gt;, China&lt;&#x2F;h2&gt;
		&lt;&#x2F;div&gt;
		&lt;div class=&quot;clear&quot;&gt;&lt;&#x2F;div&gt;
		&lt;div class=&quot;clear&quot;&gt;&lt;&#x2F;div&gt;

		&lt;div id=&quot;contactDetailsL&quot;&gt;
			&lt;ul&gt;
			  &lt;li&gt;Office 510, West Wing of Library &lt;&#x2F;li&gt;
			  &lt;li&gt;School of Mathematics and Systems Science&lt;&#x2F;li&gt;
				&lt;li&gt;Beihang University, Beijing 100191, China&lt;&#x2F;li&gt;
			&lt;&#x2F;ul&gt;
		&lt;&#x2F;div&gt;

		&lt;div id=&quot;contactDetails&quot;&gt;
			&lt;ul&gt;
				&lt;li&gt;&lt;color&gt;Official Email: &lt;&#x2F;color&gt;chenqi.mou [at] <em>buaa.edu.cn</em>&lt;&#x2F;li&gt;
				&lt;li&gt;&lt;color&gt;Personal Email: &lt;&#x2F;color&gt;chenqi.mou [at] gmail.com (&lt;a href=&quot;.&#x2F;files&#x2F;5110B295.asc&quot; target=&quot;_blank&quot;&gt;PGP&lt;&#x2F;a&gt;)&lt;&#x2F;li&gt;
&lt;li&gt;&lt;bold&gt;&lt;a href=&quot;http:&#x2F;&#x2F;smss.buaa.edu.cn&#x2F;szdw&#x2F;jxls&#x2F;mcq&#x2F;index.htm&quot; target=&quot;_blank&quot;&gt; Beihang Homepage&lt;&#x2F;a&gt;&lt;&#x2F;bold&gt; (in Chinese) &lt;&#x2F;li&gt;
			&lt;&#x2F;ul&gt;
		&lt;&#x2F;div&gt;
		&lt;div class=&quot;clear&quot;&gt;&lt;&#x2F;div&gt;
	&lt;&#x2F;div&gt;

	&lt;div id=&quot;mainArea&quot;&gt;
	        &lt;section&gt;
			&lt;article&gt;
				&lt;div class=&quot;sectionTitle&quot;&gt;
					&lt;h1&gt;News&lt;&#x2F;h1&gt;
				&lt;&#x2F;div&gt;

				&lt;div class=&quot;sectionContent&quot; style=&quot;line-height:140%&quot;&gt;
I am now involved in the organization of
&lt;ul&gt;&lt;li &gt;4th Summer School in Symbolic Computation (&lt;a href=&quot;http:&#x2F;&#x2F;sssc2015.cc4cm.org&#x2F;english.html&quot; target=_blank&gt;SSSC 2015&lt;&#x2F;a&gt;) (as Chair of Organization Committee)&lt;&#x2F;li&gt;
&lt;li&gt;Special session &lt;a href=&quot;http:&#x2F;&#x2F;www.csd.uwo.ca&#x2F;~eschost&#x2F;Macis2015&#x2F;&quot; target=_blank&gt;Polynomial System Solving&lt;&#x2F;a&gt; at &lt;a href=&quot;http:&#x2F;&#x2F;macis2015.zib.de&quot; target=_blank&gt;MACIS 2015&lt;&#x2F;a&gt; with &lt;a href=&quot;http:&#x2F;&#x2F;www.csd.uwo.ca&#x2F;~eschost&#x2F;&quot;&gt;&amp;Eacute;ric Schost&lt;&#x2F;a&gt;  (as PC member and session co-organizer)
&lt;&#x2F;ul&gt;
&lt;br&gt;
				&lt;&#x2F;div&gt;
			&lt;&#x2F;article&gt;
			&lt;div class=&quot;clear&quot;&gt;&lt;&#x2F;div&gt;
		&lt;&#x2F;section&gt;

		&lt;section&gt;
			&lt;article&gt;
				&lt;div class=&quot;sectionTitle&quot;&gt;
					&lt;h1&gt;Introduction&lt;&#x2F;h1&gt;
				&lt;&#x2F;div&gt;

				&lt;div class=&quot;sectionContent&quot;&gt;
					&lt;p&gt;I am currently an Assistant Professor at &lt;a href=&quot;http:&#x2F;&#x2F;smss.buaa.edu.cn&#x2F;english&#x2F;index.htm&quot; target=&quot;_blank&quot;&gt;School of Mathematics and Systems Science&lt;&#x2F;a&gt;, &lt;a href=&quot;http:&#x2F;&#x2F;ev.buaa.edu.cn&#x2F;&quot; target=&quot;_blank&quot;&gt;Beihang University&lt;&#x2F;a&gt;, China. The research field of my interest is Symbolic Computation. More precisely, I mainly work on polynomial systems solving with algebraic tools like triangular sets and Gr&amp;ouml;bner bases, and its applications in problems from Cryptography, Coding Theory and Biology, etc.&lt;br&#x2F;&gt;
&lt;br&#x2F;&gt;
You can find my CV &lt;a href=&quot;.&#x2F;files&#x2F;CV_cmou.pdf&quot; target=&quot;_blank&quot;&gt;here&lt;&#x2F;a&gt;.&lt;&#x2F;p&gt;
				&lt;&#x2F;div&gt;
			&lt;&#x2F;article&gt;
			&lt;div class=&quot;clear&quot;&gt;&lt;&#x2F;div&gt;
		&lt;&#x2F;section&gt;

		&lt;section&gt;
			&lt;div class=&quot;sectionTitle&quot;&gt;
				&lt;h1&gt;Education&lt;&#x2F;h1&gt;
			&lt;&#x2F;div&gt;

			&lt;div class=&quot;sectionContent&quot;&gt;
				&lt;article&gt;
					&lt;h3&gt;Ph.D. in Applied Mathematics &#x2F; Computer Science (Double Degrees)&lt;&#x2F;h3&gt;
					&lt;p class=&quot;subDetails&quot;&gt;Beihang University, China &#x2F; &lt;a href=&quot;http:&#x2F;&#x2F;www.upmc.fr&#x2F;&quot; target=&quot;_blank&quot;&gt;Universit&amp;eacute; Pierre et Marie Curie&lt;&#x2F;a&gt;, France&lt;br&#x2F;&gt;
May 2013&lt;&#x2F;p&gt;
					&lt;p&gt;&lt;color&gt;Supervisors: &lt;&#x2F;color&gt;&lt;a href=&quot;http:&#x2F;&#x2F;dongmingwang.org&#x2F;&quot; target=&quot;_blank&quot;&gt;Dongming Wang&lt;&#x2F;a&gt;, Professor &#x2F; &lt;a href=&quot;http:&#x2F;&#x2F;www-salsa.lip6.fr&#x2F;~jcf&#x2F;&quot; target=&quot;_blank&quot;&gt;Jean-Charles Faug&amp;egrave;re&lt;&#x2F;a&gt;, Research Director&lt;br &#x2F;&gt;
	&lt;color
</pre>


          </p>


      </section>

    </li>



    <li>
      <h3><a class="ip" href="/search?q=ip:202.112.137.42">202.112.137.42</a>
        <a class="original hint--bottom" target="_blank" href="#"
           data-hint="在新窗口打开">
          <sup><i class="iconfont icon-new-window"></i></sup></a></h3>

      <hr>

      <article class="port">

        <ul class="tags">


            <li class="app">

                <a href="/search?q=app:&quot;nginx&quot;&t=host">
                  nginx</a>

            </li>








        </ul>

        <div class="hostname"></div>


          <address>
            <a class="country" href="/search?q=country:&quot;China&quot;">
              <span class="flag flag-cn"></span>
              China
            </a>
            <a class="city" href="/search?q=city:&quot;Beijing&quot;">
              Beijing</a>
          </address>


        <div class="timestamp"><i class="iconfont icon-time"></i>
          <time datetime="2015-07-23T20:23:20">七月 23, 2015</time>
        </div>

      </article>

      <section class="banner">
        <header>
          <i><a href="/search?q=port:80&t=host">
            80</a></i>

            <s><a href="/search?q=service:&quot;http&quot;&t=host">
              http</a></s>

        </header>



                <pre>HTTP&#x2F;1.1 200 OK
Server: nginx
Date: Thu, 23 Jul 2015 12:14:51 GMT
Content-Type: text&#x2F;html; charset=utf-8
Content-Length: 2829
Last-Modified: Wed, 24 Dec 2014 02:00:38 GMT
Connection: close
Vary: Accept-Encoding
ETag: &quot;549a1e46-b0d&quot;
Accept-Ranges: bytes

?&lt;!DOCTYPE html PUBLIC &quot;-&#x2F;&#x2F;W3C&#x2F;&#x2F;DTD XHTML 1.0 Transitional&#x2F;&#x2F;EN&quot; &quot;http:&#x2F;&#x2F;www.w3.org&#x2F;TR&#x2F;xhtml1&#x2F;DTD&#x2F;xhtml1-transitional.dtd&quot;&gt;
&lt;html xmlns=&quot;http:&#x2F;&#x2F;www.w3.org&#x2F;1999&#x2F;xhtml&quot; xml:lang=&quot;en&quot;&gt;
&lt;head&gt;
	&lt;meta http-equiv=&quot;Content-Type&quot; content=&quot;text&#x2F;html;charset=UTF-8&quot; &#x2F;&gt;
	&lt;meta name=&quot;keywords&quot; content=&quot;&quot;&#x2F;&gt;
	&lt;meta name=&quot;description&quot; content=&quot;&quot;&gt;
	&lt;link rel=&quot;stylesheet&quot; href=&quot;css2&#x2F;style.css&quot; type=&quot;text&#x2F;css&quot;&#x2F;&gt;
	&lt;script type=&quot;text&#x2F;javascript&quot; src=&quot;js2&#x2F;jquery-1.7.2.min.js&quot;&gt;&lt;&#x2F;script&gt;
	&lt;script type=&quot;text&#x2F;javascript&quot; src=&quot;js2&#x2F;js.js&quot;&gt;&lt;&#x2F;script&gt;
	&lt;title&gt;登录页&lt;&#x2F;title&gt;
&lt;&#x2F;head&gt;
&lt;body&gt;
	&lt;!-- head --&gt;
	&lt;div id=&quot;head&quot;&gt;
		&lt;div class=&quot;header&quot;&gt;
			&lt;div class=&quot;m top&quot;&gt;
				&lt;h1 class=&quot;left&quot;&gt;&lt;img src=&quot;images2&#x2F;logo.png&quot; alt=&quot;&quot; class=&quot;left&quot;&#x2F;&gt;&lt;span class=&quot;left&quot;&gt;实习就业系统&lt;&#x2F;span&gt;&lt;&#x2F;h1&gt;
				&lt;div class=&quot;right top_right&quot;&gt;
					&lt;a href=&quot;#&quot;&gt;首页&lt;&#x2F;a&gt;
					&lt;span&gt;站内搜索&lt;&#x2F;span&gt;
					&lt;form action=&quot;&quot;&gt;
						&lt;div class=&quot;right form&quot;&gt;
							&lt;input type=&quot;text&quot; class=&quot;left txt&quot;&#x2F;&gt;
							&lt;input type=&quot;submit&quot; class=&quot;left sub&quot; value=&quot;&quot; &#x2F;&gt;
						&lt;&#x2F;div&gt;
					&lt;&#x2F;form&gt;
				&lt;&#x2F;div&gt;
			&lt;&#x2F;div&gt;
		&lt;&#x2F;div&gt;
		&lt;div class=&quot;clear&quot;&gt;&lt;&#x2F;div&gt;
	&lt;&#x2F;div&gt;
	&lt;!-- banner --&gt;
	&lt;div class=&quot;banner m&quot;&gt;&lt;img src=&quot;images2&#x2F;banner2.jpg&quot; alt=&quot;&quot; &#x2F;&gt; &lt;&#x2F;div&gt;
	&lt;!-- main --&gt;
	&lt;div class=&quot;main m &quot;&gt;
		&lt;div class=&quot;navtion&quot;&gt;
			&lt;strong&gt;当前位置：&lt;&#x2F;strong&gt;&lt;a href=&quot;#&quot;&gt;学院首页&lt;&#x2F;a&gt; &gt; &lt;a href=&quot;#&quot;&gt;院务首页&lt;&#x2F;a&gt; &gt; &lt;a href=&quot;#&quot;&gt;办公系统&lt;&#x2F;a&gt;
		&lt;&#x2F;div&gt;
		&lt;div class=&quot;register&quot;&gt;
			&lt;img src=&quot;images2&#x2F;reg.jpg&quot; alt=&quot;&quot; class=&quot;left&quot;&#x2F;&gt;
			&lt;form action=&quot;&quot;&gt;
				&lt;div class=&quot;register_right right&quot;&gt;
					&lt;p class=&quot;register_title&quot;&gt;欢迎登录实习就业系统&lt;&#x2F;p&gt;
					&lt;div class=&quot;user&quot;&gt;
						&lt;p class=&quot;left&quot;&gt;用户名&lt;&#x2F;p&gt;
						&lt;input type=&quot;text&quot; class=&quot;left&quot; name=&quot;user&quot;&#x2F;&gt;
					&lt;&#x2F;div&gt;
					&lt;div class=&quot;user&quot;&gt;
						&lt;p class=&quot;left password&quot;&gt;密&amp;nbsp;&amp;nbsp;&amp;nbsp;码&lt;&#x2F;p&gt;
						&lt;input type=&quot;password&quot; class=&quot;left&quot; name=&quot;password&quot;&#x2F;&gt;
					&lt;&#x2F;div&gt;
					&lt;div class=&quot;log&quot;&gt;
						&lt;label for=&quot;register&quot; class=&quot;left&quot;&gt;&lt;input type=&quot;checkbox&quot; id=&quot;register&quot;&#x2F;&gt;下次直接登录&lt;&#x2F;label&gt; &lt;input type=&quot;reset&quot; value=&quot;重置登录密码&quot; class=&quot;reset right&quot;&#x2F;&gt;
					&lt;&#x2F;div&gt;
					&lt;div class=&quot;clear&quot;&gt;&lt;&#x2F;div&gt;
					&lt;div class=&quot;register_button&quot;&gt;&lt;input type=&quot;submit&quot; value=&quot;登录系统&quot;&#x2F;&gt;&lt;&#x2F;div&gt;
				&lt;&#x2F;div&gt;

			&lt;&#x2F;form&gt;
		&lt;&#x2F;div&gt;
		&lt;div class=&quot;clear&quot;&gt;&lt;&#x2F;div&gt;
	&lt;&#x2F;div&gt;
	&lt;!-- footer --&gt;
	&lt;div class=&quot;footer&quot;&gt;
		&lt;div class=&quot;m foot&quot;&gt;
			&lt;div class=&quot;address left&quot;&gt;
				&lt;p&gt;地址：北京市海淀区学院路35号北航世宁大厦10层1003 邮编：100191 &lt;&#x2F;p&gt;
				&lt;p&gt;传真：010-82338510 电话：010-82338333 电邮：baoming@<em>buaa.edu.cn</em> &lt;&#x2F;p&gt;
			&lt;&#x2F;div&gt;
			&lt;div class=&quot;right wm&quot;&gt;
				&lt;img src=&quot;images2&#x2F;wm.
</pre>


          </p>


      </section>

    </li>



    <li>
      <h3><a class="ip" href="/search?q=ip:202.199.24.205">202.199.24.205</a>
        <a class="original hint--bottom" target="_blank" href="#"
           data-hint="在新窗口打开">
          <sup><i class="iconfont icon-new-window"></i></sup></a></h3>

      <hr>

      <article class="port">

        <ul class="tags">


            <li class="app">

                <a href="/search?q=app:&quot;Apache Tomcat/Coyote JSP engine&quot;%20ver:&quot;1.1&quot;&t=host">
                  Apache Tomcat/Coyote JSP engine:1.1</a>

            </li>








        </ul>

        <div class="hostname"></div>


          <address>
            <a class="country" href="/search?q=country:&quot;China&quot;">
              <span class="flag flag-cn"></span>
              China
            </a>
            <a class="city" href="/search?q=city:&quot;Beijing&quot;">
              Beijing</a>
          </address>


        <div class="timestamp"><i class="iconfont icon-time"></i>
          <time datetime="2015-07-23T16:39:11">七月 23, 2015</time>
        </div>

      </article>

      <section class="banner">
        <header>
          <i><a href="/search?q=port:80&t=host">
            80</a></i>

            <s><a href="/search?q=service:&quot;http&quot;&t=host">
              http</a></s>

        </header>



                <pre>HTTP&#x2F;1.1 200 OK
Server: Apache-Coyote&#x2F;1.1
Set-Cookie: JSESSIONID=A7B2B25FEBC73E640BFCA215F2298DEC; Path=&#x2F;; HttpOnly
Content-Type: text&#x2F;html;charset=GBK
Content-Length: 3550
Vary: Accept-Encoding
Date: Thu, 23 Jul 2015 08:37:14 GMT
Connection: close









&lt;!DOCTYPE HTML PUBLIC &quot;-&#x2F;&#x2F;W3C&#x2F;&#x2F;DTD HTML 4.0 Transitional&#x2F;&#x2F;EN&quot;&gt;
&lt;HTML&gt;&lt;HEAD&gt;&lt;TITLE&gt;CourseGrading&lt;&#x2F;TITLE&gt;
&lt;META http-equiv=Content-Type content=&quot;text&#x2F;html; charset=GBK&quot;&gt;
&lt;LINK href=&quot;css&#x2F;page.css&quot; rel=stylesheet&gt;
&lt;LINK href=&quot;css&#x2F;style.css&quot; rel=stylesheet&gt;
&lt;script src=&quot;admin&#x2F;js&#x2F;jquery-1.3.2.min.js&quot; type=&quot;text&#x2F;javascript&quot;&gt;&lt;&#x2F;script&gt;
&lt;script src=&quot;admin&#x2F;js&#x2F;jquery-ui-1.7.1.custom.min.js&quot; type=&quot;text&#x2F;javascript&quot;&gt;&lt;&#x2F;script&gt;

&lt;META http-equiv=Pragma content=no-cache&gt;
&lt;META content=&quot;MSHTML 6.00.2800.1516&quot; name=GENERATOR&gt;

&lt;SCRIPT language=&quot;JavaScript&quot; type=&quot;text&#x2F;javascript&quot;&gt;

    $(document).ready(function(){

        $(&quot;#bulletins&quot;).load(&quot;bulletin&#x2F;clientbulletins.jsp?c=&quot; + Math.random());
        $(&quot;#vipNotice&quot;).load(&quot;bulletin&#x2F;showvipnotice.jsp?c=&quot; + Math.random());
    });

&lt;&#x2F;SCRIPT&gt;

&lt;&#x2F;HEAD&gt;
&lt;BODY&gt;

&lt;CENTER&gt;
&lt;FORM id=Form1 name=&quot;loginForm&quot; action=&quot;login&#x2F;loginproc.jsp&quot; method=&quot;post&quot;&gt;

&lt;DIV class=TextBlock style=&quot;WIDTH: 676px&quot;&gt;
&lt;TABLE style=&quot;WIDTH: 100%&quot; cellSpacing=0 cellPadding=0&gt;
  &lt;TBODY&gt;
  &lt;TR&gt;
      &lt;TD&gt;&lt;IMG src=&quot;images&#x2F;cglogo5.jpg&quot; align=&quot;middle&quot;&gt;&amp;nbsp;&amp;nbsp;&amp;nbsp;
      &lt;span class=TextBlockTitle&gt;程序设计类课程教学辅助系统&lt;&#x2F;span&gt;
      &lt;DIV class=TitleLine&gt;&lt;&#x2F;DIV&gt;&lt;&#x2F;TD&gt;&lt;&#x2F;TR&gt;&lt;&#x2F;TBODY&gt;&lt;&#x2F;TABLE&gt;&lt;!-- signed in  --&gt;&lt;!-- not sign in--&gt;

&lt;&#x2F;DIV&gt;
&lt;br&gt;
&lt;DIV id=&quot;vipNotice&quot;&gt;

&lt;&#x2F;DIV&gt;

&lt;TABLE id=dlstMarkets style=&quot;BORDER-COLLAPSE: collapse&quot; cellSpacing=0
cellPadding=0 border=0&gt;
  &lt;TBODY&gt;
  &lt;TR&gt;
    &lt;TD valign=top&gt;
      &lt;DIV class=MainPageTable style=&quot;HEIGHT: 300px; overflow: auto;&quot; id=&quot;bulletins&quot;&gt;

        &lt;&#x2F;DIV&gt;
    &lt;&#x2F;TD&gt;
    &lt;TD valign=top&gt;
      &lt;DIV class=MainPageTable style=&quot;HEIGHT: 300px&quot;&gt;&lt;A class=TextBlockTitle href=&quot;#&quot;&gt;学生登录&lt;&#x2F;A&gt;

            &lt;DIV style=&quot;HEIGHT: 12px;color: #FF0000&quot;&gt;

            &lt;&#x2F;DIV&gt;
            &lt;TABLE&gt;
              &lt;TBODY&gt;
              &lt;TR&gt;
                &lt;TD vAlign=top width=50&gt;&lt;img src=&quot;images&#x2F;twoman.gif&quot; alt=&quot;&quot; width=&quot;63&quot; height=&quot;48&quot; border=&quot;0&quot;&gt;&lt;&#x2F;TD&gt;
                &lt;TD align=top&gt;
                  &lt;DIV class=TextBlock&gt;
                    &lt;table width=&quot;100%&quot;  border=&quot;0&quot; cellspacing=&quot;0&quot; cellpadding=&quot;0&quot;&gt;
                      &lt;tr&gt;
                          &lt;td height=&quot;30&quot;&gt;学号：&lt;INPUT class=&quot;input&quot; maxLength=255 name=&quot;stid&quot; size=&quot;20&quot;&gt;&lt;&#x2F;td&gt;
                      &lt;&#x2F;tr&gt;
                      &lt;tr&gt;
                        &lt;td height=&quot;30&quot;&gt;
                          密码：&lt;INPUT  class=&quot;input&quot; maxLength=127 name=pwd type=&quot;password&quot;  value=&quot;&quot; size=&quot;20&quot;&gt;
                        &lt;&#x2F;td&gt;
                      &lt;&#x2F;tr&gt;
                      &lt;tr&gt;
                          &lt;td align=&quot;center&quot;&gt;&lt;input name=&quot;loginbutton&quot; type=&quot;submit&quot; value=登录&gt;&lt;&#x2F;td&gt;
                      &lt;&#x2F;tr&gt;
                    &lt;&#x2F;table&gt;
                  &lt;&#x2F;DIV&gt;&lt;&#x2F;TD&gt;&lt;&#x2F;TR&gt;&lt;&#x2F;TBODY&gt;&lt;&#x2F;TABLE&gt;
        &lt;&#x2F;DIV&gt;&lt;&#x2F;TD&gt;&lt;&#x2F;TR&gt;
  &lt;&#x2F;TBODY&gt;&lt;&#x2F;TABLE&gt;
 &lt;br&gt;
&lt;TABLE cellSpacing=0 cellPadding=0 width=&quot;100%&quot;&gt;
  &lt;TBODY&gt;
  &lt;TR&gt;
    &lt;TD colSpan=2&gt;
      &lt;DIV class=FooterLine&gt;&lt;&#x2F;DIV&gt;&lt;&#x2F;TD&gt;&lt;&#x2F;TR&gt;
  &lt;TR&gt;
    &lt;TD&gt;
      &lt;DIV align=center&gt;&lt;p style=&quot;text-align: center; &quot;&gt;&lt;span style=&quot;color: rgb(0, 0, 255); &quot;&gt;沈阳航空航天大学计算机学院&amp;nbsp;&lt;&#x2F;span&gt;&lt;&#x2F;p&gt;&lt;&#x2F;DIV&gt;&lt;&#x2F;TD&gt;
    &lt;TD align=right&gt;&lt;&#x2F;TD&gt;&lt;&#x2F;TR&gt;&lt;&#x2F;TBODY&gt;&lt;&#x2F;TABLE&gt;

&lt;&#x2F;FORM&gt;&lt;&#x2F;CENTER&gt;&lt;br&gt;&lt;br&gt;
    &lt;div class=&quot;Product_Text&quot;&gt;
        北京航空航天大学 赵长海 版权所有&lt;br&gt;
        邮箱：zch@<em>buaa.edu.cn</em>&lt;br&gt;
        版本：&lt;a href=http:&#x2F;&#x2F;course.sei.buaa.edu.cn&gt;CourseGrading 2.1.0&lt;&#x2F;a&gt;
    &lt;&#x2F;div&gt;
&lt;&#x2F;BODY&gt;&lt;&#x2F;HTML&gt;
&lt;script language=&quot;JavaScript&quot; type=&quot;text&#x2F;javascript&quot;&gt;
&lt;!--
document.loginForm.stid.focus();
&#x2F;&#x2F;--&gt;
&lt;&#x2F;script&gt;
</pre>


          </p>


      </section>

    </li>



    <li>
      <h3><a class="ip" href="/search?q=ip:202.120.119.232">202.120.119.232</a>
        <a class="original hint--bottom" target="_blank" href="#"
           data-hint="在新窗口打开">
          <sup><i class="iconfont icon-new-window"></i></sup></a></h3>

      <hr>

      <article class="port">

        <ul class="tags">


            <li class="app">

                <a href="/search?q=app:&quot;Apache Tomcat/Coyote JSP engine&quot;%20ver:&quot;1.1&quot;&t=host">
                  Apache Tomcat/Coyote JSP engine:1.1</a>

            </li>








        </ul>

        <div class="hostname"></div>


          <address>
            <a class="country" href="/search?q=country:&quot;China&quot;">
              <span class="flag flag-cn"></span>
              China
            </a>
            <a class="city" href="/search?q=city:&quot;Shanghai&quot;">
              Shanghai</a>
          </address>


        <div class="timestamp"><i class="iconfont icon-time"></i>
          <time datetime="2015-07-23T16:29:16">七月 23, 2015</time>
        </div>

      </article>

      <section class="banner">
        <header>
          <i><a href="/search?q=port:80&t=host">
            80</a></i>

            <s><a href="/search?q=service:&quot;http&quot;&t=host">
              http</a></s>

        </header>



                <pre>HTTP&#x2F;1.1 200 OK
Server: Apache-Coyote&#x2F;1.1
Set-Cookie: JSESSIONID=1AC952C54E976375CAD1F2EDD107EF66; Path=&#x2F;; HttpOnly
Content-Type: text&#x2F;html;charset=GBK
Content-Length: 3450
Vary: Accept-Encoding
Date: Thu, 23 Jul 2015 08:27:37 GMT
Connection: close









&lt;!DOCTYPE HTML PUBLIC &quot;-&#x2F;&#x2F;W3C&#x2F;&#x2F;DTD HTML 4.0 Transitional&#x2F;&#x2F;EN&quot;&gt;
&lt;HTML&gt;&lt;HEAD&gt;&lt;TITLE&gt;CourseGrading&lt;&#x2F;TITLE&gt;
&lt;META http-equiv=Content-Type content=&quot;text&#x2F;html; charset=GBK&quot;&gt;
&lt;LINK href=&quot;css&#x2F;page.css&quot; rel=stylesheet&gt;
&lt;LINK href=&quot;css&#x2F;style.css&quot; rel=stylesheet&gt;
&lt;script src=&quot;admin&#x2F;js&#x2F;jquery-1.3.2.min.js&quot; type=&quot;text&#x2F;javascript&quot;&gt;&lt;&#x2F;script&gt;
&lt;script src=&quot;admin&#x2F;js&#x2F;jquery-ui-1.7.1.custom.min.js&quot; type=&quot;text&#x2F;javascript&quot;&gt;&lt;&#x2F;script&gt;

&lt;META http-equiv=Pragma content=no-cache&gt;
&lt;META content=&quot;MSHTML 6.00.2800.1516&quot; name=GENERATOR&gt;

&lt;SCRIPT language=&quot;JavaScript&quot; type=&quot;text&#x2F;javascript&quot;&gt;

    $(document).ready(function(){

        $(&quot;#bulletins&quot;).load(&quot;bulletin&#x2F;clientbulletins.jsp?c=&quot; + Math.random());
        $(&quot;#vipNotice&quot;).load(&quot;bulletin&#x2F;showvipnotice.jsp?c=&quot; + Math.random());
    });

&lt;&#x2F;SCRIPT&gt;

&lt;&#x2F;HEAD&gt;
&lt;BODY&gt;

&lt;CENTER&gt;
&lt;FORM id=Form1 name=&quot;loginForm&quot; action=&quot;login&#x2F;loginproc.jsp&quot; method=&quot;post&quot;&gt;

&lt;DIV class=TextBlock style=&quot;WIDTH: 676px&quot;&gt;
&lt;TABLE style=&quot;WIDTH: 100%&quot; cellSpacing=0 cellPadding=0&gt;
  &lt;TBODY&gt;
  &lt;TR&gt;
      &lt;TD&gt;&lt;IMG src=&quot;images&#x2F;cglogo5.jpg&quot; align=&quot;middle&quot;&gt;&amp;nbsp;&amp;nbsp;&amp;nbsp;
      &lt;span class=TextBlockTitle&gt;程序设计类课程教学辅助系统&lt;&#x2F;span&gt;
      &lt;DIV class=TitleLine&gt;&lt;&#x2F;DIV&gt;&lt;&#x2F;TD&gt;&lt;&#x2F;TR&gt;&lt;&#x2F;TBODY&gt;&lt;&#x2F;TABLE&gt;&lt;!-- signed in  --&gt;&lt;!-- not sign in--&gt;

&lt;&#x2F;DIV&gt;
&lt;br&gt;
&lt;DIV id=&quot;vipNotice&quot;&gt;

&lt;&#x2F;DIV&gt;

&lt;TABLE id=dlstMarkets style=&quot;BORDER-COLLAPSE: collapse&quot; cellSpacing=0
cellPadding=0 border=0&gt;
  &lt;TBODY&gt;
  &lt;TR&gt;
    &lt;TD valign=top&gt;
      &lt;DIV class=MainPageTable style=&quot;HEIGHT: 300px; overflow: auto;&quot; id=&quot;bulletins&quot;&gt;

        &lt;&#x2F;DIV&gt;
    &lt;&#x2F;TD&gt;
    &lt;TD valign=top&gt;
      &lt;DIV class=MainPageTable style=&quot;HEIGHT: 300px&quot;&gt;&lt;A class=TextBlockTitle href=&quot;#&quot;&gt;学生登录&lt;&#x2F;A&gt;

            &lt;DIV style=&quot;HEIGHT: 12px;color: #FF0000&quot;&gt;

            &lt;&#x2F;DIV&gt;
            &lt;TABLE&gt;
              &lt;TBODY&gt;
              &lt;TR&gt;
                &lt;TD vAlign=top width=50&gt;&lt;img src=&quot;images&#x2F;twoman.gif&quot; alt=&quot;&quot; width=&quot;63&quot; height=&quot;48&quot; border=&quot;0&quot;&gt;&lt;&#x2F;TD&gt;
                &lt;TD align=top&gt;
                  &lt;DIV class=TextBlock&gt;
                    &lt;table width=&quot;100%&quot;  border=&quot;0&quot; cellspacing=&quot;0&quot; cellpadding=&quot;0&quot;&gt;
                      &lt;tr&gt;
                          &lt;td height=&quot;30&quot;&gt;学号：&lt;INPUT class=&quot;input&quot; maxLength=255 name=&quot;stid&quot; size=&quot;20&quot;&gt;&lt;&#x2F;td&gt;
                      &lt;&#x2F;tr&gt;
                      &lt;tr&gt;
                        &lt;td height=&quot;30&quot;&gt;
                          密码：&lt;INPUT  class=&quot;input&quot; maxLength=127 name=pwd type=&quot;password&quot;  value=&quot;&quot; size=&quot;20&quot;&gt;
                        &lt;&#x2F;td&gt;
                      &lt;&#x2F;tr&gt;
                      &lt;tr&gt;
                          &lt;td align=&quot;center&quot;&gt;&lt;input name=&quot;loginbutton&quot; type=&quot;submit&quot; value=登录&gt;&lt;&#x2F;td&gt;
                      &lt;&#x2F;tr&gt;
                    &lt;&#x2F;table&gt;
                  &lt;&#x2F;DIV&gt;&lt;&#x2F;TD&gt;&lt;&#x2F;TR&gt;&lt;&#x2F;TBODY&gt;&lt;&#x2F;TABLE&gt;
        &lt;&#x2F;DIV&gt;&lt;&#x2F;TD&gt;&lt;&#x2F;TR&gt;
  &lt;&#x2F;TBODY&gt;&lt;&#x2F;TABLE&gt;
 &lt;br&gt;
&lt;TABLE cellSpacing=0 cellPadding=0 width=&quot;100%&quot;&gt;
  &lt;TBODY&gt;
  &lt;TR&gt;
    &lt;TD colSpan=2&gt;
      &lt;DIV class=FooterLine&gt;&lt;&#x2F;DIV&gt;&lt;&#x2F;TD&gt;&lt;&#x2F;TR&gt;
  &lt;TR&gt;
    &lt;TD&gt;
      &lt;DIV align=center&gt;CourseGrading&lt;&#x2F;DIV&gt;&lt;&#x2F;TD&gt;
    &lt;TD align=right&gt;&lt;&#x2F;TD&gt;&lt;&#x2F;TR&gt;&lt;&#x2F;TBODY&gt;&lt;&#x2F;TABLE&gt;

&lt;&#x2F;FORM&gt;&lt;&#x2F;CENTER&gt;&lt;br&gt;&lt;br&gt;
    &lt;div class=&quot;Product_Text&quot;&gt;
        北京航空航天大学 赵长海 版权所有&lt;br&gt;
        邮箱：zch@<em>buaa.edu.cn</em>&lt;br&gt;
        版本：&lt;a href=http:&#x2F;&#x2F;course.sei.buaa.edu.cn&gt;CourseGrading 1.1.3&lt;&#x2F;a&gt;
    &lt;&#x2F;div&gt;
&lt;&#x2F;BODY&gt;&lt;&#x2F;HTML&gt;
&lt;script language=&quot;JavaScript&quot; type=&quot;text&#x2F;javascript&quot;&gt;
&lt;!--
document.loginForm.stid.focus();
&#x2F;&#x2F;--&gt;
&lt;&#x2F;script&gt;
</pre>


          </p>


      </section>

    </li>



    <li>
      <h3><a class="ip" href="/search?q=ip:202.112.137.133">202.112.137.133</a>
        <a class="original hint--bottom" target="_blank" href="#"
           data-hint="在新窗口打开">
          <sup><i class="iconfont icon-new-window"></i></sup></a></h3>

      <hr>

      <article class="port">

        <ul class="tags">


            <li class="app">

                <a href="/search?q=app:&quot;nginx&quot;&t=host">
                  nginx</a>

            </li>








        </ul>

        <div class="hostname"></div>


          <address>
            <a class="country" href="/search?q=country:&quot;China&quot;">
              <span class="flag flag-cn"></span>
              China
            </a>
            <a class="city" href="/search?q=city:&quot;Beijing&quot;">
              Beijing</a>
          </address>


        <div class="timestamp"><i class="iconfont icon-time"></i>
          <time datetime="2015-07-23T15:51:10">七月 23, 2015</time>
        </div>

      </article>

      <section class="banner">
        <header>
          <i><a href="/search?q=port:80&t=host">
            80</a></i>

            <s><a href="/search?q=service:&quot;http&quot;&t=host">
              http</a></s>

        </header>



                <pre>HTTP&#x2F;1.1 200 OK
Server: nginx
Date: Thu, 23 Jul 2015 07:49:30 GMT
Content-Type: text&#x2F;html; charset=utf-8
Connection: close
X-Powered-By: PHP&#x2F;5.4.4-14+deb7u12
Set-Cookie: PHPSESSID=ihavatihk0qaji5f4ujpslfir7; path=&#x2F;; HttpOnly
Expires: Mon, 26 Jul 1997 05:00:00 GMT
Cache-Control: no-store, no-cache, must-revalidate
Pragma: no-cache
P3P: CP=&quot;IDC DSP COR ADM DEVi TAIi PSA PSD IVAi IVDi CONi HIS OUR IND CNT&quot;
Last-Modified: Thu, 23 Jul 2015 07:49:30 GMT
Cache-Control: post-check=0, pre-check=0
Vary: Accept-Encoding

&lt;!DOCTYPE html PUBLIC &quot;-&#x2F;&#x2F;W3C&#x2F;&#x2F;DTD XHTML 1.0 Transitional&#x2F;&#x2F;EN&quot; &quot;http:&#x2F;&#x2F;www.w3.org&#x2F;TR&#x2F;xhtml1&#x2F;DTD&#x2F;xhtml1-transitional.dtd&quot;&gt;
&lt;html xmlns=&quot;http:&#x2F;&#x2F;www.w3.org&#x2F;1999&#x2F;xhtml&quot; xml:lang=&quot;zh-Hans&quot; lang=&quot;zh-Hans&quot;&gt;
	&lt;head&gt;
&lt;meta http-equiv=&quot;content-type&quot; content=&quot;text&#x2F;html; charset=UTF-8&quot; &#x2F;&gt;
&lt;title&gt;北航财务处网络调查统计系统&lt;&#x2F;title&gt;
&lt;meta name=&quot;generator&quot; content=&quot;LimeSurvey http:&#x2F;&#x2F;www.limesurvey.org&quot; &#x2F;&gt;

&lt;!-- The following line includes jquery-ui.css or jquery-ui-custom.css from template dir, template.css and needed specific css file for survey --&gt;
&lt;link rel=&#x27;stylesheet&#x27; type=&#x27;text&#x2F;css&#x27; media=&#x27;all&#x27; href=&#x27;&#x2F;templates&#x2F;default&#x2F;jquery-ui-custom.css&#x27; &#x2F;&gt;
&lt;link rel=&#x27;stylesheet&#x27; type=&#x27;text&#x2F;css&#x27; media=&#x27;all&#x27; href=&#x27;&#x2F;templates&#x2F;default&#x2F;template.css&#x27; &#x2F;&gt;


&lt;!--[if lte IE 6]&gt;
&lt;link rel=&quot;stylesheet&quot; type=&quot;text&#x2F;css&quot; href=&quot;&#x2F;templates&#x2F;default&#x2F;ie_fix_6.css&quot; &#x2F;&gt;
&lt;![endif]--&gt;
&lt;!--[if IE 7]&gt;
&lt;link rel=&quot;stylesheet&quot; type=&quot;text&#x2F;css&quot; href=&quot;&#x2F;templates&#x2F;default&#x2F;ie_fix_7.css&quot; &#x2F;&gt;
&lt;![endif]--&gt;
&lt;!--[if IE 8]&gt;
&lt;link rel=&quot;stylesheet&quot; type=&quot;text&#x2F;css&quot; href=&quot;&#x2F;templates&#x2F;default&#x2F;ie_fix_8.css&quot; &#x2F;&gt;
&lt;![endif]--&gt;

&lt;!-- The following CSS hides visual elements of the progress bar from screen readers. --&gt;
&lt;style type=&quot;text&#x2F;css&quot; media=&quot;aural tty&quot;&gt;
    progress-graph .zero, progress-graph .graph, progress-graph .cent { display: none; }
		&lt;&#x2F;style&gt;
	&lt;!-- The following line includes jquery.js, jquery-ui.js, survey_runtime.js , template.js and needed specific js file for survey --&gt;
	&lt;script type=&#x27;text&#x2F;javascript&#x27; src=&#x27;&#x2F;scripts&#x2F;jquery&#x2F;jquery.js&#x27;&gt;&lt;&#x2F;script&gt;
&lt;script type=&#x27;text&#x2F;javascript&#x27; src=&#x27;&#x2F;scripts&#x2F;jquery&#x2F;jquery-ui.js&#x27;&gt;&lt;&#x2F;script&gt;
&lt;script type=&#x27;text&#x2F;javascript&#x27; src=&#x27;&#x2F;scripts&#x2F;jquery&#x2F;jquery.ui.touch-punch.min.js&#x27;&gt;&lt;&#x2F;script&gt;
&lt;script type=&#x27;text&#x2F;javascript&#x27; src=&#x27;&#x2F;scripts&#x2F;survey_runtime.js&#x27;&gt;&lt;&#x2F;script&gt;
&lt;script type=&#x27;text&#x2F;javascript&#x27; src=&#x27;&#x2F;templates&#x2F;default&#x2F;template.js&#x27;&gt;&lt;&#x2F;script&gt;

&lt;link rel=&quot;shortcut icon&quot; href=&quot;&#x2F;templates&#x2F;default&#x2F;favicon.ico&quot; &#x2F;&gt;

&lt;style type=&#x27;text&#x2F;css&#x27;&gt; #turnkey-credit { font-family: Tahoma,Sans,Arial,Helvetica,Verdana,sans-serif; font-size: 11px; text-align: center; } #turnkey-credit a { text-decoration: none; } #turnkey-credit a:hover { text-decoration: underline; } &lt;&#x2F;style&gt;&lt;&#x2F;head&gt;
&lt;body class=&quot;default lang-zh-Hans &quot;&gt;
    &lt;div class=&quot;outerframe&quot;&gt;
        &lt;table class=&quot;innerframe&quot;&gt;
            &lt;tr&gt;
                &lt;td&gt;
&lt;table class=&quot;survey-list-table&quot;&gt;
    &lt;tr&gt;
        &lt;td class=&quot;site-name&quot;&gt;
            &lt;h1&gt;北航财务处网络调查统计系统&lt;&#x2F;h1&gt;
        &lt;&#x2F;td&gt;
    &lt;&#x2F;tr&gt;
    &lt;tr&gt;
        &lt;td class=&quot;survey-list-heading&quot;&gt;
            现有的调查：
        &lt;&#x2F;td&gt;
    &lt;&#x2F;tr&gt;
    &lt;tr&gt;
        &lt;td class=&quot;survey-list&quot;&gt;
            &lt;ul&gt;&lt;li&gt;&lt;a href=&#x27;&#x2F;index.php&#x2F;774944&#x2F;lang&#x2F;zh-Hans&#x27;  class=&#x27;surveytitle&#x27;&gt;学校信息化建设满意度调查问卷&lt;&#x2F;a&gt;
&lt;&#x2F;li&gt;
&lt;&#x2F;ul&gt;
        &lt;&#x2F;td&gt;
    &lt;&#x2F;tr&gt;
    &lt;tr&gt;
        &lt;td class=&quot;survey-contact&quot;&gt;
            请联系北航财务处 ( &amp;#105;&amp;#99;&amp;#x77;&amp;#x40;<em>b&amp;#117;aa.e&amp;#100;&amp;#x75;&amp;#x2e;&amp;#99;&amp;#110;</em> )以获得进一步帮助。
        &lt;&#x2F;td&gt;
    &lt;&#x2F;tr&gt;
    &lt;tr&gt;
        &lt;td class=&quot;language-changer&quot;&gt;
            &lt;p&gt;&lt;select id=&#x27;languagechanger&#x27; name=&#x27;languagechanger&#x27; class=&#x27;languagechanger&#x27; onchange=&#x27;javascript:window.location=this.value&#x27;&gt;
&lt;option value=&#x27;&#x2F;index.php&#x2F;survey&#x2F;index?lang=he&#x27;&gt; &amp;#1506;&amp;#1489;&amp;#1512;&amp;#1497;&amp;#1514; - 希伯来语&lt;&#x2F;option&gt;
&lt;option value=&#x27;&#x2F;index.php&#x2F;survey&#x2F;index?lang=be&#x27;&gt;&amp;#1041;&amp;#1077;&amp;#1083;&amp;#1072;&amp;#1088;&amp;#1091;&amp;#1089;&amp;#1082;&amp;#1110; - 白俄罗斯语&lt;&#x2F;option&gt;
&lt;option value=&#x27;&#x2F;index.php&#x2F;survey&#x2F;index?lang=mk&#x27;&gt;&amp;#1052;&amp;#1072;&amp;#1082;&amp;#1077;&amp;#1076;&amp;#1086;&amp;#1085;&amp;#1089;&amp;#1082;&amp;#1080; - 马其顿&lt;&#x2F;option&gt;
&lt;option
</pre>


          </p>


      </section>

    </li>



    <li>
      <h3><a class="ip" href="/search?q=ip:202.112.128.68">202.112.128.68</a>
        <a class="original hint--bottom" target="_blank" href="#"
           data-hint="在新窗口打开">
          <sup><i class="iconfont icon-new-window"></i></sup></a></h3>

      <hr>

      <article class="port">

        <ul class="tags">


            <li class="app">

                <a href="/search?q=app:&quot;Apache Tomcat/Coyote JSP engine&quot;%20ver:&quot;1.1&quot;&t=host">
                  Apache Tomcat/Coyote JSP engine:1.1</a>

            </li>








        </ul>

        <div class="hostname"></div>


          <address>
            <a class="country" href="/search?q=country:&quot;China&quot;">
              <span class="flag flag-cn"></span>
              China
            </a>
            <a class="city" href="/search?q=city:&quot;Beijing&quot;">
              Beijing</a>
          </address>


        <div class="timestamp"><i class="iconfont icon-time"></i>
          <time datetime="2015-07-23T15:49:47">七月 23, 2015</time>
        </div>

      </article>

      <section class="banner">
        <header>
          <i><a href="/search?q=port:80&t=host">
            80</a></i>

            <s><a href="/search?q=service:&quot;http&quot;&t=host">
              http</a></s>

        </header>



                <pre>HTTP&#x2F;1.1 200 OK
Server: Apache-Coyote&#x2F;1.1
Pragma: No-cache
Cache-Control: no-cache
Expires: Thu, 01 Jan 1970 00:00:00 GMT
Content-Type: text&#x2F;html;charset=GBK
Content-Language: zh-CN
Date: Thu, 23 Jul 2015 07:48:05 GMT
Connection: close

&lt;!DOCTYPE html PUBLIC &quot;-&#x2F;&#x2F;W3C&#x2F;&#x2F;DTD XHTML 1.0 Transitional&#x2F;&#x2F;EN&quot;
     &quot;http:&#x2F;&#x2F;www.w3.org&#x2F;TR&#x2F;xhtml1&#x2F;DTD&#x2F;xhtml1-transitional.dtd&quot;&gt;
&lt;html xmlns=&quot;http:&#x2F;&#x2F;www.w3.org&#x2F;1999&#x2F;xhtml&quot;&gt;
&lt;head&gt;
&lt;title&gt;北京航空航天大学&lt;&#x2F;title&gt;
&lt;base href=&quot;http:&#x2F;&#x2F;localhost&#x2F;coremail&#x2F;cmcu_var&#x2F;index_cmxt30N1.jsp&quot; &#x2F;&gt;
&lt;link href=&quot;index_cmxt30N1&#x2F;login.css&quot; rel=&quot;stylesheet&quot; type=&quot;text&#x2F;css&quot; charset=&quot;iso-8859-1&quot; &#x2F;&gt;




&lt;script type=&quot;text&#x2F;javascript&quot; src=&quot;..&#x2F;common&#x2F;js&#x2F;jquery.js&quot;&gt;&lt;&#x2F;script&gt;
&lt;script type=&quot;text&#x2F;javascript&quot; src=&quot;index_cmxt30N1&#x2F;login.js&quot; charset=&quot;iso-8859-1&quot;&gt;&lt;&#x2F;script&gt;
&lt;script type=&quot;text&#x2F;javascript&quot;&gt;
    var markme_msg = &quot;请按 Ctrl-D 收藏本页&quot;;
&lt;&#x2F;script&gt;


&lt;&#x2F;head&gt;

&lt;body&gt;
    &lt;div class=&quot;Head&quot; id=&quot;head&quot;&gt;
        &lt;div class=&quot;logo&quot;&gt;
            &lt;a href=&quot;http:&#x2F;&#x2F;www.buaa.edu.cn&quot; target=&quot;_blank&quot;&gt;
              &lt;img alt=&quot;北京航空航天大学邮件系统&quot; style=&quot;border:0 none;&quot; src=&quot;index_cmxt30N1&#x2F;logo.gif&quot; &#x2F;&gt;
            &lt;&#x2F;a&gt;
        &lt;&#x2F;div&gt;
	        &lt;div class=&quot;Links&quot; id=&quot;links&quot;&gt;
	             &lt;a target=&quot;_blank&quot;  href=&quot;http:&#x2F;&#x2F;oldmail.buaa.edu.cn&quot;&gt;旧邮件系统入口&lt;&#x2F;a&gt; |





	            &lt;span id=&quot;localeSwitch&quot;&gt;&lt;a href=&quot;javascript:setCookie(&#x27;locale&#x27;,&#x27;en_US&#x27;); window.location.reload();&quot;&gt;English Version&lt;&#x2F;a&gt; |&amp;nbsp;&lt;&#x2F;span&gt;

	            &lt;span id=&quot;helpIndex&quot;&gt;&lt;a target=&quot;_blank&quot; href=&quot;&#x2F;coremail&#x2F;help&#x2F;index_zh_CN.jsp&quot;&gt;帮助&lt;&#x2F;a&gt;&lt;&#x2F;span&gt;
	        &lt;&#x2F;div&gt;
    &lt;&#x2F;div&gt;

    &lt;div class=&quot;mainContainer&quot; id=&quot;mainContainer&quot; onclick=&quot;submitLinkForm();&quot;&gt;
        &lt;img src=&quot;index_cmxt30N1&#x2F;bg1.jpg&quot; id=&quot;mainBgImg&quot;&gt;
        &lt;div class=&quot;mainBgDesc&quot; id=&quot;mainBgDesc&quot;&gt;
            &lt;a href=&quot;http:&#x2F;&#x2F;www.buaa.edu.cn&#x2F;zt&#x2F;byzt&#x2F;83971.htm&quot; target=&quot;_blank&quot;&gt;&lt;&#x2F;a&gt;
        &lt;&#x2F;div&gt;
        &lt;form id=&quot;linkForm&quot; action=&quot;#&quot; style=&quot;display: &quot;&quot;;&quot; target=&quot;_blank&quot;&gt;&lt;&#x2F;form&gt;
    &lt;&#x2F;div&gt;

    &lt;div class=&quot;footer&quot; id=&quot;footer&quot;&gt;
        &lt;div class= &quot;copyright&quot;&gt;
            Copyright 2014-2015 北京航空航天大学版权所有 联系我们：&lt;a href=&quot;https:&#x2F;&#x2F;mail.buaa.edu.cn&quot;&gt;010-82317005&lt;&#x2F;a&gt; Email: &lt;a href=&quot;mailto:support@buaa.edu.cn&quot;&gt;support@<em>buaa.edu.cn&lt;&#x2F;a&gt;</em>
        &lt;&#x2F;div&gt;
    &lt;&#x2F;div&gt;












        &lt;div class=&quot;select_options localePanel&quot;&gt;
            &lt;ul&gt;





                    &lt;a href=&quot;javascript:void(0);&quot; onclick=&quot;changeLocale(&#x27;zh_CN&#x27;, &#x27;简体中文&#x27;); return false;&quot;&gt;
                        &lt;li&gt;
                            &lt;span&gt;简体中文&lt;&#x2F;span&gt;
                        &lt;&#x2F;li&gt;
                    &lt;&#x2F;a&gt;




</pre>


          </p>


      </section>

    </li>



</ul>



            <div>没找到想要的结果？试试
              <a class="advanced" href="/search/advanced">高级搜索</a></div>

            <div class="clearfix"></div>



  <ul class="pagination">

      <li><a href="/search?q=.buaa.edu.cn&p=2&t=host">&laquo; 上一页</a></li>



      <li><a
          href="/search?q=.buaa.edu.cn&p=1&t=host">1</a></li>

      <li><a
          href="/search?q=.buaa.edu.cn&p=2&t=host">2</a></li>

      <li class="active"><a
          href="/search?q=.buaa.edu.cn&p=3&t=host">3</a></li>

      <li><a
          href="/search?q=.buaa.edu.cn&p=4&t=host">4</a></li>

      <li><a
          href="/search?q=.buaa.edu.cn&p=5&t=host">5</a></li>



      <li><a href="/search?q=.buaa.edu.cn&p=4&t=host">下一页 &raquo;</a></li>


  </ul>


          </div>

        </div>
      </div>

    </div>
  </section>







<footer class="site-footer">
  <div class="container">
    <div class="row">
      <div class="col-sm-12">
        <!--<a class="logo" href="/">-->
          <!--<img src="/static/v4/images/zoomeye.svg" style="width: 114px;height: 24px;" alt=""/>-->
        <!--</a>-->
        <section class="nav-links">
          <div class="link-group">
            <div class="group-title">主导航</div>
            <ul class="list-unstyled">
              <li class="link-item"><a class="link-item" href="/">搜索</a></li>
              <li class="link-item"><a class="link-item" href="/vision/">视角</a></li>

              <li class="link-item"><a class="link-item" href="/pirate">海盗榜</a></li>
              <li class="link-item"><a class="link-item" href="/api">API</a></li>


            </ul>
          </div>
          <div class="link-group">
            <div class="group-title">更多</div>
            <ul class="list-unstyled">
              <li class="link-item"><a class="link-item" href="/more#know-about-zoomeye">探索 ZoomEye</a></li>
              <li class="link-item"><a class="link-item" href="/more#cooperation-plan">ZoomEye 开放计划</a></li>
              <li class="link-item"><a class="link-item" href="/more#vulnerability-tracking">漏洞跟踪与应急</a></li>
              <li class="link-item"><a class="link-item" href="/more#statistical-topics">统计与专题</a></li>
            </ul>
          </div>
          <div class="link-group">
            <div class="group-title">帮助</div>
            <ul class="list-unstyled">
              <li class="link-item"><a class="link-item" href="/help/manual">用户手册</a></li>
              <li class="link-item"><a class="link-item" href="/help/feedback">反馈</a></li>
              <li class="link-item"><a class="link-item" href="/about">关于</a></li>
              <li class="link-item"><a class="link-item" href="/about#changelog">更新日志</a></li>
            </ul>
          </div>
          <div class="link-group">
            <div class="group-title">联系我们</div>
            <ul class="list-unstyled">
              <li class="link-item phone"><span>400-060-9587</span></li>
              <li class="link-item email"><span>404Team@knownsec.com</span></li>
              <li class="link-item address"><span>北京市 朝阳区 阜安西路 望京SOHO中心 T3-A座-15层</span></li>
            </ul>
          </div>
        </section>
        <div class="follow-us">
          <div class="title">关注我们</div>
          <div class="links">
            <!--<a class="link-weixin" href="#"><i class="fa fa-weixin"></i></a>-->
            <a target="_blank"
               href="http://shang.qq.com/wpa/qunwpa?idkey=521e74d22253ada7a8cba9cb938e5c78c37ee61544b020ee19eac91ac921fd42"
               class="link-qq" href="#"><i class="fa fa-qq"></i></a>
            <a target="_blank" href="http://weibo.com/u/3987998963" class="link-weibo" href="#"><i
                    class="fa fa-weibo"></i></a>
            <a target="_blank" href="https://twitter.com/zoomeye_team" class="link-twitter" href="#"><i
                    class="fa fa-twitter"></i></a>
            <a href="mailto:team@zoomeye.org" class="link-facebook" href="#"><i class="fa fa-envelope"></i></a>
          </div>
        </div>
      </div>
    </div>
  </div>
</footer>

<div class="ksz-footer">
  <div class="container">
    <div class="row">
      <div class="col-sm-12">
        <div class="logo-wrapper">
          <a target="_blank" href="http://kcon.knownsec.com/"><img src="/static/v4/images/ksz-kcon.svg?v=1" alt="KCon" style="width: 97px;height: 38px;"/></a>
        </div>
        <div class="logo-wrapper">
          <a target="_blank" href="https://www.seebug.org/"><img src="/static/v4/images/ksz-seebug.svg" alt="Seebug" style="width: 98px;height: 31px;"/></a>
        </div>
        <div class="logo-wrapper">
          <a href="/"><img src="/static/v4/images/ksz-zoomeye.svg" alt="ZoomEye" style="width: 126px;height: 24px;"/></a>
        </div>
        <div class="copyright-text">
          Copyright @ 404 Team from Knownsec.

          <a class="language" href="/accounts/language/?l=en">English</a>

        </div>
      </div>
    </div>
  </div>
</div>





<a href="#" id="scroll-top" class="scroll-top"><i class="iconfont icon-up"></i></a>

<script type="text/javascript" src="/j18n/djangojs/zoomeye.js"></script>
<script type="application/javascript" src="/static/js/vender.dist.v2_5.js" charset="utf-8"></script>
<script type="application/javascript" src="/static/js/search.dist.v2_9_3.js" charset="utf-8"></script>
<script type="application/javascript" src="/static/js/v3_to_v4_migrate.dist.v1_0.js" charset="utf-8"></script>

<script>
  function getRelatedVul(appName) {
    var url = 'https://www.seebug.org/api/get_open_vuls_by_component?app_name=' + appName;
    var $relatedVul = $('.section-related-vul');
    $.get(url, function (res) {
      var source = '<li><a target="_blank" href="https://www.seebug.org/vuldb/ssvid-{{id}}">{{name}}</a></li>';
      var template = Handlebars.compile(source);
      var html = '';
      if (res.total > 0) {
        res.results.forEach(function (item, index) {
          if (index < 10) {
            html += template(item)
          }
        });
        $relatedVul.find('.count').text(res.total);
        $relatedVul.find('ul').html(html);
        $relatedVul.show();
        $relatedVul.find('.more').attr('href', 'https://www.seebug.org/search?keywords=' + appName);
      }
    })
  }
  function isSearchAPP() {
    var reg = /\?q=app:[\s+]*['"]?(\w+)['"]?/;
    var str = decodeURIComponent(window.location.search);
    console.log(str);
    var appName = reg.exec(str);
    console.log(appName[1]);
    if (appName !== null) {
      getRelatedVul(appName[1])
    }
  }
  isSearchAPP();

  $('#j-section-vul-switch').click(function(){
    $(this).toggleClass('closed');
    $(this).parents('.section-related-vul').toggleClass('closed');
  })
</script>



  <script async defer type="application/javascript" src="/static/js/hotkeys.dist.v2_4.js" charset="utf-8"></script>




    <script class="stat baidu-stat">var _hmt = _hmt || [];
      (function() { var hm = document.createElement("script");
        hm.src = "//hm.baidu.com/hm.js?e58da53564b1ec3fb2539178e6db042e";
        var s = document.getElementsByTagName("script")[0];
        s.parentNode.insertBefore(hm, s); })(); </script>



</body>
</html>

'''

selector=etree.HTML(html)
content=selector.xpath(r"//h3/a[@class='ip']/text()")
print content

