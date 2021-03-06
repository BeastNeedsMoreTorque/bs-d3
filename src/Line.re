/*
 * line-related functions from d3-shape
 * https://github.com/d3/d3-shape#lines
 */

type t;

external make : unit => t = "line" [@@bs.module "d3-shape"];
external x : ('a => int => array 'a => float) => t = "" [@@bs.send.pipe: t];
external y : ('a => int => array 'a => float) => t = "" [@@bs.send.pipe: t];
external defined : ('a => int => array 'a => bool) => t = "" [@@bs.send.pipe: t];
external curve : Curve.t => t = "" [@@bs.send.pipe: t];
external context : 'a => t = "" [@@bs.send.pipe: t];
external getContext : unit => 'a = "context" [@@bs.send.pipe: t];
