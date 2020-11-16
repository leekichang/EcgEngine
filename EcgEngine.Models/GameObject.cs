﻿using EcgEngine.Models.VisualScript;
using System;
using System.Drawing;

namespace EcgEngine.Models
{
    /// <summary>
    /// Don't 'new' this class directly.
    /// </summary>
    public class GameObject
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public bool IsPlayer { get; set; }
        public Point Position { get; set; }
        public string SpriteName { get; set; }
        public string SpritePath { get; set; }
        public float ScaleFactor { get; set; } = 2.0F;

        #region Script


        #endregion


    }
}