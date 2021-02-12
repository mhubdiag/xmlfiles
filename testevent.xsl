<?xml version="1.0"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:template match="event">
        <html>
        <head>
        <title>Decoded Event Record</title>
        <link href="viewevent.css" rel="stylesheet" type="text/css" />
        </head>
        <body>
        <table border='1' bordercolor='darkblue' cellspacing="2" rules="none">
            <tr>
                <th>Decoded Event Record</th>
            </tr>
            <tr>
                <td>
                    <table border='1' bordercolor='darkblue' cellspacing="2" rules="none">
                        <tr>
                            <td class="heading">Event</td>
                            <td class="value" colspan="3">
                                <xsl:value-of select="eventname"/>
                            </td>
                            <td class="heading">Event Sent</td>
                            <td class="value">
                                <xsl:value-of select="@sent"/>
                            </td>
                        </tr>
                        <tr>
                            <td class="heading">Event ID</td>
                            <td class="value">
                                <xsl:value-of select="@id"/>
                            </td>
                            <td class="heading">High Priority</td>
                            <td class="value">
                                <xsl:value-of select="@highpriority"/>
                            </td>
                            <td class="heading">Include Location</td>
                            <td class="value">
                                <xsl:value-of select="@inclocation"/>
                            </td>
                        </tr>
                        <tr>
                            <td class="heading">Include Status</td>
                            <td class="value">
                                <xsl:value-of select="@incstatus"/>
                            </td>
                            <td class="heading">Include Last Valid</td>
                            <td class="value">
                                <xsl:value-of select="@inclastvalid"/>
                            </td>
                            <td class="heading">Include Trigger ID</td>
                            <td class="value">
                                <xsl:value-of select="@inctriggerid"/>
                            </td>
                        </tr>
                        <tr>
                            <td class="heading">PDU Counter</td>
                            <td class="value">
                                <xsl:value-of select="pducounter"/>
                            </td>
                            <td class="heading">CM Policy Index</td>
                            <td class="value">
                                <xsl:value-of select="cmpolicy"/>
                            </td>
                            <td class="heading">Selected Speed</td>
                            <td class="value">
                                <xsl:value-of select="selectedspeed"/>
                            </td>
                        </tr>
                    </table>
                    <table border='1' bordercolor='darkblue' cellspacing="2" rules="none">
                        <tr>
                            <th class="sub" colspan="14">Date and Time</th>
                        </tr>
                        <tr>
                            <td class="heading">Date</td>
                            <td class="value">
                                20<xsl:value-of select='format-number(datetime/@year,"00")' />-<xsl:value-of select="datetime/@month" />-<xsl:value-of select="datetime/@day" /> 
							</td>
                            <td class="heading">Time</td>
                            <td class="value">
                                <xsl:value-of select="datetime/@hour" />:<xsl:value-of select="datetime/@minute" />:<xsl:value-of select="datetime/@second" /> 
							</td>
                            <td class="heading">Counter</td>
                            <td class="value">
                                <xsl:value-of select="counter"/>
                            </td>                                
                        </tr>
                    </table>
                    <table border='1' bordercolor='darkblue' cellspacing="2" rules="none">
                        <tr>
                            <th colspan="4" class="sub">Trigger</th>
                        </tr>
                        <tr>
                            <td class="heading">Source</td>
                            <td class="value">
                                <xsl:value-of select="trigger/@source"/>
                            </td>
                            <td class="heading">ID</td>
                            <td class="value">
                                <xsl:value-of select="trigger/@id"/>
                            </td>
                        </tr>
                    </table>
                    <table border='1' bordercolor='darkblue' cellspacing="2" rules="none">
                        <tr>
                            <th class="sub"  colspan="8">GSM Information</th>
                        </tr>
                        <tr>
                            <td class="heading">Local Area Code</td>
                            <td class="value">
                                <xsl:value-of select="gsm/@localareacode"/>
                            </td>
                            <td class="heading">Cell ID</td>
                            <td class="value">
                                <xsl:value-of select="gsm/@cellid"/>
                            </td>
                            <td class="heading">RSSI</td>
                            <td class="value">
                                <xsl:value-of select="gsm/@rssi"/>
                            </td>
                            <td class="heading">Network Code</td>
                            <td class="value">
                                <xsl:value-of select="gsm/@networkcode"/>
                            </td>
                        </tr>
                    </table>
                    <table border='1' bordercolor='darkblue' cellspacing="2" rules="none">
                        <tr>
                            <th class="sub">GPS Information</th>
                        </tr>
                        <tr>
                            <td>
                                <table border='1' bordercolor='darkblue' cellspacing="2" rules="none">
                                    <tr>
                                        <th class="sub" colspan="16">GPS Status</th>
                                    </tr>
                                    <tr>
                                        <td class="heading">Valid</td>
                                        <td class="value">
                                            <xsl:value-of select="gps/position/gpsstatus/valid"/>
                                        </td>
                                        <td class="heading">Ant Connected</td>
                                        <td class="value">
                                            <xsl:value-of select="gps/position/gpsstatus/antennaconnected"/>
                                        </td>
                                        <td class="heading">Ant Short</td>
                                        <td class="value">
                                            <xsl:value-of select="gps/position/gpsstatus/antennashort"/>
                                        </td>
                                        <td class="heading">Ant Power</td>
                                        <td class="value">
                                            <xsl:value-of select="gps/position/gpsstatus/antennapower"/>
                                        </td>
                                        <td class="heading">2D Lock</td>
                                        <td class="value">
                                            <xsl:value-of select="gps/position/gpsstatus/lock2d"/>
                                        </td>
                                        <td class="heading">3D Lock</td>
                                        <td class="value">
                                            <xsl:value-of select="gps/position/gpsstatus/lock3d"/>
                                        </td>
                                        <td class="heading">Valid UTC Time</td>
                                        <td class="value">
                                            <xsl:value-of select="gps/position/gpsstatus/validutctime"/>
                                        </td>
                                        <td class="heading">Best Guess Position</td>
                                        <td class="value">
                                            <xsl:value-of select="gps/position/gpsstatus/bestguess"/>
                                        </td>
                                    </tr>
                                </table>
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <table border='1' bordercolor='darkblue' cellspacing="2" rules="none">
                                    <tr>
                                        <th class="sub" colspan="12">GPS Location</th>
                                    </tr>
                                    <tr>
                                        <td class="heading">Latitude</td>
                                        <td class="value">
                                            <xsl:value-of select="gps/position/latitude"/>
                                        </td>
                                        <td class="heading">Longitude</td>
                                        <td class="value">
                                            <xsl:value-of select="gps/position/longitude"/>
                                        </td>
                                        <td class="heading">Heading</td>
                                        <td class="value">
                                            <xsl:value-of select="gps/@heading"/>
                                        </td>
                                        <td class="heading">GPS Speed</td>
                                        <td class="value">
                                            <xsl:value-of select="gps/@gpsspeed"/>
                                        </td>
                                        <td class="heading">Satellites</td>
                                        <td class="value">
                                            <xsl:value-of select="gps/@satellites"/>
                                        </td>
                                        <td class="heading">NAV Mode</td>
                                        <td class="value">
                                            <xsl:value-of select="gps/@navmode"/>
                                        </td>
                                    </tr>
                                </table>
                                <table border='1' bordercolor='darkblue' cellspacing="2" rules="none">
                                    <tr>
                                        <th class="sub">Last Valid Position Information</th>
                                    </tr>
                                    <tr>
                                        <td>
                                            <table border='1' bordercolor='darkblue' cellspacing="2" rules="none">
                                                <tr>
                                                    <th class="sub"  colspan="12">Date and Time</th>
                                                </tr>
												<tr>
													<td class="heading">Date</td>
													<td class="value">
														20<xsl:value-of select='format-number(gps/lastvalidinfo/datetime/@year,"00")' />-<xsl:value-of select="gps/lastvalidinfo/datetime/@month" />-<xsl:value-of select="gps/lastvalidinfo/datetime/@day" /> 
													</td>
													<td class="heading">Time</td>
													<td class="value">
														<xsl:value-of select="gps/lastvalidinfo/datetime/@hour" />:<xsl:value-of select="gps/lastvalidinfo/datetime/@minute" />:<xsl:value-of select="gps/lastvalidinfo/datetime/@second" /> 
													</td>
												</tr>
                                            </table>
                                        </td>
                                    </tr>
                                    <tr>
                                        <td>
                                            <table border='1' bordercolor='darkblue' cellspacing="2" rules="none">
                                                <tr>
                                                    <th class="sub" colspan="16">GPS Status</th>
                                                </tr>
                                                <tr>
                                                    <td class="heading">Valid</td>
                                                    <td class="value">
                                                        <xsl:value-of select="gps/lastvalidinfo/gpsstatus/valid"/>
                                                    </td>
                                                    <td class="heading">Ant Connected</td>
                                                    <td class="value">
                                                        <xsl:value-of select="gps/lastvalidinfo/gpsstatus/antennaconnected"/>
                                                    </td>
                                                    <td class="heading">Ant Short</td>
                                                    <td class="value">
                                                        <xsl:value-of select="gps/lastvalidinfo/gpsstatus/antennashort"/>
                                                    </td>
                                                    <td class="heading">Ant Power</td>
                                                    <td class="value">
                                                        <xsl:value-of select="gps/lastvalidinfo/gpsstatus/antennapower"/>
                                                    </td>
                                                    <td class="heading">2D Lock</td>
                                                    <td class="value">
                                                        <xsl:value-of select="gps/lastvalidinfo/gpsstatus/lock2d"/>
                                                    </td>
                                                    <td class="heading">3D Lock</td>
                                                    <td class="value">
                                                        <xsl:value-of select="gps/lastvalidinfo/gpsstatus/lock3d"/>
                                                    </td>
                                                    <td class="heading">Valid UTC Time</td>
                                                    <td class="value">
                                                        <xsl:value-of select="gps/lastvalidinfo/gpsstatus/validutctime"/>
                                                    </td>
													<td class="heading">Best Guess Position</td>
													<td class="value">
														<xsl:value-of select="gps/lastvalidinfo/gpsstatus/bestguess"/>
													</td>
													
                                                </tr>
                                            </table>
                                        </td>
                                    </tr>
                                </table>
                            </td>
                        </tr>
                    </table>
                    <table border='1' bordercolor='darkblue' cellspacing="2" rules="none">
                        <tr>
                            <th class="sub">Inputs and Outputs</th>
                        </tr>
                        <tr>
                            <td>
                                <table>
                                    <tr>
                                        <th colspan="2" class="sub">Inputs</th>
                                        <xsl:for-each select="io/inputs/input">
                                            <td class="heading">
                                                <xsl:value-of select="@nr"/>
                                            </td>
                                            <td class="value">
                                                <xsl:value-of select="."/>
                                            </td>
                                        </xsl:for-each>
                                        <th colspan="2" class="sub">Outputs</th>
                                        <xsl:for-each select="io/outputs/output">
                                            <td class="heading">
                                                <xsl:value-of select="@nr"/>
                                            </td>
                                            <td class="value">
                                                <xsl:value-of select="."/>
                                            </td>
                                        </xsl:for-each>
                                    </tr>
                                </table>
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <table>
                                    <tr>
                                        <td class="heading">Ignition</td>
                                        <td class="Value">
                                            <xsl:value-of select="io/ignition"/>
                                        </td>
                                        <td class="heading">Battery Connected</td>
                                        <td class="Value">
                                            <xsl:value-of select="io/battpower"/>
                                        </td>
                                    </tr>
                                </table>
                            </td>
                        </tr>
                    </table>
                    <table border='1' bordercolor='darkblue' cellspacing="2" rules="none">
                        <tr>
                            <th class="sub">Exceptions</th>
                        </tr>
                        <xsl:for-each select="exceptions/exception">
                            <tr>
                                <td class="value">
                                    <xsl:value-of select="."/>
                                </td>
                            </tr>
                        </xsl:for-each>
                    </table>
                    <table border='1' bordercolor='darkblue' cellspacing="2" rules="none">
                        <tr>
                            <th class="sub">Event Data</th>                            
                            <th class="sub"><xsl:value-of select="eventdata/@datalength"/></th>
                        </tr>
                        <xsl:for-each select="eventdata/tag/data">
                            <tr>
                                <td class="heading">
                                    <xsl:value-of select="description"/>
                                </td>
                                <td class="value">
                                    <xsl:value-of select="value"/>
                                </td>
                            </tr>
                        </xsl:for-each>
                        <tr><th colspan="2" class="sub">Event Data (Hex)</th></tr>
                        <tr><td colspan="2" class="value"><xsl:value-of select="eventdata/@eventdatahex"/></td></tr>
                    </table>
                </td>
            </tr>
        </table>
        </body>
        </html>
    </xsl:template>
</xsl:stylesheet>
